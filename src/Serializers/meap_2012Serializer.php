<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\meap_2012Serializer.
 *
 * Serializes meap_2012 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class meap_2012Serializer extends SerializerAbstract {
  protected $type = 'meap_2012s';

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
