<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\esd_hs_2015Serializer.
 *
 * Serializes esd_hs_2015 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class esd_hs_2015Serializer extends SerializerAbstract {
  protected $type = 'esd_hs_2015s';

  protected function attributes($row) {
    return $row;
  }

  protected function id($row) {
    return $row->bcode;
  }
  protected function getId($row) {
    return $row->bcode;
  }
}
