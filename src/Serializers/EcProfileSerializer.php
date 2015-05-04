<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcProfileSerializer.
 *
 * Serializes early childhood center profiles.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class EcProfileSerializer extends SerializerAbstract {
  protected $type = 'ec_profiles';

  protected function attributes($ec_profile) {
    return $ec_profile;
  }

  protected function id($ec_profile) {
    return $ec_profile->nid;
  }
}
