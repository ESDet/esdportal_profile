<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\act_2011Serializer.
 *
 * Serializes act_2011 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class act_2011Serializer extends SerializerAbstract {
  protected $type = 'act_2011s';

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
