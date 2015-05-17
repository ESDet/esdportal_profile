<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\esd_k8_2013Serializer.
 *
 * Serializes esd_k8_2013 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class esd_k8_2013Serializer extends SerializerAbstract {
  protected $type = 'esd_k8_2013s';

  protected function attributes($row) {
    return $row;
  }

  protected function id($row) {
    return $row->buildingcode;
  }
  protected function getId($row) {
    return $row->buildingcode;
  }
}
