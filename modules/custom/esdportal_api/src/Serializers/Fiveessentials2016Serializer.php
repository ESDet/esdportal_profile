<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\Fiveessentials2016Serializer.
 *
 * Serializes fiveessentials_2016 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes fiveessentials_2016 data records.
 */
class Fiveessentials2016Serializer extends SerializerAbstract {
  protected $type = 'fiveessentials_2016s';

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
    return $row->State_Schl_Id;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($row) {
    return $row->State_Schl_Id;
  }

}
