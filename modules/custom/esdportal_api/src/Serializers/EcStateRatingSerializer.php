<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcStateRatingSerializer.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes early childhood state ratings.
 */
class EcStateRatingSerializer extends SerializerAbstract {
  protected $type = 'ec_state_ratings';

  /**
   * Nothing special.
   */
  protected function attributes($ec_state_rating) {
    return $ec_state_rating;
  }

  /**
   * Sets the id.
   */
  protected function id($ec_state_rating) {
    return $ec_state_rating->rating_id;
  }
  /**
   * Backwards compatible.
   */
  protected function getId($ec_state_rating) {
    return $ec_state_rating->rating_id;
  }

}
