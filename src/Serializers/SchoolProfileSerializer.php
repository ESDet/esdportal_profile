<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\SchoolProfileSerializer.
 *
 * Serializes school profiles.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;

class SchoolProfileSerializer extends SerializerAbstract {
  protected $type = 'school_profiles';

  protected function attributes($school_profile) {
    return $school_profile;
  }

  protected function id($school_profile) {
    return $school_profile->nid;
  }
  protected function getId($school_profile) {
    return $school_profile->nid;
  }
}
