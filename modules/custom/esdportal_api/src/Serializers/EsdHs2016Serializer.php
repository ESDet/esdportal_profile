<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EsdHs2016Serializer.
 *
 * Serializes esd_hs_2016 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes esd_hs_2016 data records.
 */
class EsdHs2016Serializer extends SerializerAbstract {
  protected $type = 'esd_hs_2016s';

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
