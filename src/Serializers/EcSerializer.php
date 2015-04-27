<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcSerializer.
 *
 * Serializes early childhood taxonomy terms.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Tobscure\JsonApi\Link;
use Drupal\esdportal_api\Serializers\EcProfileSerializer;

class EcSerializer extends SerializerAbstract {
  protected $type = 'ecs';

  protected function attributes($ec_term) {
    // these turn into linkages:
    unset($ec_term->ec_profiles);
    unset($ec_term->ec_profile_ids);

    return $ec_term;
  }

  protected function getId($ec_term) {
    return entity_extract_ids('taxonomy_term', $ec_term)[0];
  }

  protected function ec_profiles() {
    return function ($ec, $include, $included) {
      $serializer = new EcProfileSerializer($included);

      if (count($ec->ec_profile_ids) == 0) {
        return null;
      }

      $ec_profiles = $serializer->collection($include ? $ec->ec_profiles : $ec->ec_profile_ids);

      $link = new Link($ec_profiles);

      return $link;
    };
  }
}
