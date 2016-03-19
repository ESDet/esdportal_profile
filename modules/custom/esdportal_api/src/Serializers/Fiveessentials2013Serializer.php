<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\Fiveessentials2013Serializer.
 *
 * Serializes fiveessentials_2013 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes fiveessentials_2013 data records.
 */
class Fiveessentials2013Serializer extends SerializerAbstract {
  protected $type = 'fiveessentials_2013s';

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
    return $row->BCODE;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($row) {
    return $row->BCODE;
  }

}
