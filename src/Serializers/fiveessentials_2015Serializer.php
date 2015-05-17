<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\fiveessentials_2015Serializer.
 *
 * Serializes fiveessentials_2015 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class fiveessentials_2015Serializer extends SerializerAbstract {
  protected $type = 'fiveessentials_2015s';

  protected function attributes($row) {
    xdebug_break();
    return $row;
  }

  protected function id($row) {
    xdebug_break();
    return $row->State_Schl_Id;
  }
  protected function getId($row) {
    xdebug_break();
    return $row->State_Schl_Id;
  }
}
