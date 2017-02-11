<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EsdK82017Serializer.
 *
 * Serializes esd_k8_2017 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes esd_k8_2017 data records.
 */
class EsdK82017Serializer extends SerializerAbstract {
  protected $type = 'esd_k8_2017s';

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
