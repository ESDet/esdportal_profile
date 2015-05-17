<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\meap_2013Serializer.
 *
 * Serializes meap_2013 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class meap_2013Serializer extends SerializerAbstract {
  protected $type = 'meap_2013s';

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
