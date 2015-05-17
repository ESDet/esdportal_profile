<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\meap_2011Serializer.
 *
 * Serializes meap_2011 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class meap_2011Serializer extends SerializerAbstract {
  protected $type = 'meap_2011s';

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
