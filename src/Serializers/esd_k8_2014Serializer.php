<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\esd_k8_2014Serializer.
 *
 * Serializes esd_k8_2014 records.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class esd_k8_2014Serializer extends SerializerAbstract {
  protected $type = 'esd_k8_2014s';

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
