<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\Meap2012Serializer.
 *
 * Serializes meap_2012 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes meap_2012 data records.
 */
class Meap2012Serializer extends SerializerAbstract {
  protected $type = 'meap_2012s';

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
