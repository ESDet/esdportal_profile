<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\Fiveessentials2014Serializer.
 *
 * Serializes fiveessentials_2014 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes fiveessentials_2014 data records.
 */
class Fiveessentials2014Serializer extends SerializerAbstract {
  protected $type = 'fiveessentials_2014s';

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
