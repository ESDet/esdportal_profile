<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\meap_2010Serializer.
 *
 * Serializes meap_2010 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class meap_2010Serializer extends SerializerAbstract {
  protected $type = 'meap_2010s';

  protected function attributes($row) {
    return $row;
  }

  protected function id($row) {
    return $row->BuildingCode;
  }
  protected function getId($row) {
    return $row->BuildingCode;
  }
}
