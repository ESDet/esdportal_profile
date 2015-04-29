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
use Drupal\esdportal_api\Serializers\EcStateRatingSerializer;

class EcSerializer extends SerializerAbstract {
  protected $type = 'ecs';
  protected $link = ['ec_profiles', 'most_recent_ec_state_rating'];
  protected $include = null;

  protected function attributes($ec_term) {
    // these turn into linkages:
    unset($ec_term->ec_profiles);
    unset($ec_term->ec_profile_ids);
    unset($ec_term->most_recent_ec_state_rating);
    unset($ec_term->most_recent_ec_state_rating_id);

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

  protected function most_recent_ec_state_rating() {
    return function ($ec, $include, $included) {
      $serializer = new EcStateRatingSerializer($included);

      if (!$ec->most_recent_ec_state_rating) {
        return null;
      }

      $most_recent_ec_state_rating = $serializer->resource($include ? $ec->most_recent_ec_state_rating : $ec->most_recent_ec_state_rating_id);

      $link = new Link($most_recent_ec_state_rating);

      return $link;
    };
  }
}
