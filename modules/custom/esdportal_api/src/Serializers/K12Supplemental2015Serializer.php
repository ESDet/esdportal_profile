<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\K12Supplemental2015Serializer.
 *
 * Serializes k12_supplemental_2015 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes k12_supplemental_2015 data records.
 */
class K12Supplemental2015Serializer extends SerializerAbstract {
  protected $type = 'k12_supplemental_2015s';

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
    return $row->bcode;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($row) {
    return $row->bcode;
  }

}
