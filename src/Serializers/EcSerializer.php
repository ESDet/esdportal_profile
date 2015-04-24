<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcSerializer.
 *
 * Serializes early childhood taxonomy terms.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class EcSerializer extends SerializerAbstract {
  protected $type = 'ecs';

  protected function attributes($ec_term) {
    return $ec_term;
  }

  protected function getId($ec_term) {
    return entity_extract_ids('taxonomy_term', $ec_term)[0];
  }
}
