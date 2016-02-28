<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EsdEl2015Serializer.
 *
 * Serializes ESD Early Learning 2015 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

/**
 * Serializes esd_el_2015 data records.
 */
class EsdEl2015Serializer extends SerializerAbstract {
  protected $type = 'esd_el_2015s';

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
