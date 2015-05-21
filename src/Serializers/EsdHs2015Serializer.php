<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EsdHs2015Serializer.
 *
 * Serializes esd_hs_2015 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes esd_hs_2015 data records.
 */
class EsdHs2015Serializer extends SerializerAbstract {
  protected $type = 'esd_hs_2015s';

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
