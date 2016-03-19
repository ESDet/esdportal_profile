<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EsdK82013Serializer.
 *
 * Serializes esd_k8_2013 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes esd_k8_2013 data records.
 */
class EsdK82013Serializer extends SerializerAbstract {
  protected $type = 'esd_k8_2013s';

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
    return $row->buildingcode;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($row) {
    return $row->buildingcode;
  }

}
