<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\fiveessentials_2014Serializer.
 *
 * Serializes fiveessentials_2014 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class fiveessentials_2014Serializer extends SerializerAbstract {
  protected $type = 'fiveessentials_2014s';

  protected function attributes($row) {
    return $row;
  }

  protected function id($row) {
    return $row->BCODE;
  }
  protected function getId($row) {
    return $row->BCODE;
  }
}
