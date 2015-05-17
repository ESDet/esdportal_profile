<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\meap_2009Serializer.
 *
 * Serializes meap_2009 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class meap_2009Serializer extends SerializerAbstract {
  protected $type = 'meap_2009s';

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
