<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcStateRatingSerializer.
 *
 * Serializes early childhood state ratings.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class EcStateRatingSerializer extends SerializerAbstract {
  protected $type = 'ec_state_ratings';

  protected function attributes($ec_state_rating) {
    return $ec_state_rating;
  }

  protected function getId($ec_state_rating) {
    return $ec_state_rating->rating_id;
  }
}
