<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\Fiveessentials2015Serializer.
 *
 * Serializes fiveessentials_2015 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes fiveessentials_2015 data records.
 */
class Fiveessentials2015Serializer extends SerializerAbstract {
  protected $type = 'fiveessentials_2015s';

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
