<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EsdEl2014Serializer.
 *
 * Serializes ESD Early Learning 2014 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes esd_el_2014 data records.
 */
class EsdEl2014Serializer extends SerializerAbstract {
  protected $type = 'esd_el_2014s';

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
    return $row->program_id;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($row) {
    return $row->program_id;
  }

}
