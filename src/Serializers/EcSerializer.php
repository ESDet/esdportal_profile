<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcSerializer.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Tobscure\JsonApi\Link;
use Drupal\esdportal_api\Serializers\EcProfileSerializer;
use Drupal\esdportal_api\Serializers\EcStateRatingSerializer;

/**
 * Serializes early childhood taxonomy terms.
 */
class EcSerializer extends SerializerAbstract {
  protected $type = 'ecs';
  protected $link = ['ec_profile', 'most_recent_ec_state_rating'];
  protected $include = NULL;

  /**
   * Removes linked info.
   */
  protected function attributes($ec_term) {
    // These turn into linkages:
    unset($ec_term->ec_profile);
    unset($ec_term->ec_profile_id);
    unset($ec_term->most_recent_ec_state_rating);
    unset($ec_term->most_recent_ec_state_rating_id);

    return $ec_term;
  }

  /**
   * Returns the id.
   */
  protected function id($ec_term) {
    return entity_extract_ids('taxonomy_term', $ec_term)[0];
  }
  /**
   * Same thing... backwards compatible with bnchdrff/json-api just in case.
   */
  protected function getId($ec_term) {
    return entity_extract_ids('taxonomy_term', $ec_term)[0];
  }

  /**
   * Handles inclusion of ec_profiles.
   */
  protected function ec_profile() {
    return function ($ec, $include, $included) {
      $serializer = new EcProfileSerializer($included);

      if (!$ec->ec_profile_id) {
        return NULL;
      }

      $ec_profile = $serializer->resource($include ? $ec->ec_profile : $ec->ec_profile_id);

      $link = new Link($ec_profile);

      return $link;
    };
  }

  /**
   * Handles inclusion of most_recent_ec_state_ratings.
   */
  protected function most_recent_ec_state_rating() {
    return function ($ec, $include, $included) {
      $serializer = new EcStateRatingSerializer($included);

      if (!isset($ec->most_recent_ec_state_rating)) {
        return NULL;
      }

      $most_recent_ec_state_rating = $serializer->resource($include ? $ec->most_recent_ec_state_rating : $ec->most_recent_ec_state_rating_id);

      $link = new Link($most_recent_ec_state_rating);

      return $link;
    };
  }

}
