<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\Count2016Serializer.
 *
 * Serializes count_2016 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes count_2016 data records.
 */
class Count2016Serializer extends SerializerAbstract {
  protected $type = 'count_2016s';

  /**
   * Nothing special here, yet.
   */
  protected function attributes($row) {
    return $row;
  }

  /**
   * Provides primary key as id.
   */
  protected function id($row) {
    return $row->BuildingCode;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($row) {
    return $row->BuildingCode;
  }

}
