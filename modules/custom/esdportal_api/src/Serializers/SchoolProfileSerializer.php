<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\SchoolProfileSerializer.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
/**
 * Serializes school profiles.
 */
class SchoolProfileSerializer extends SerializerAbstract {
  protected $type = 'school_profiles';

  /**
   * Nothing special here, yet.
   */
  protected function attributes($school_profile) {
    return $school_profile;
  }

  /**
   * Provides node id as id.
   */
  protected function id($school_profile) {
    return $school_profile->nid;
  }

  /**
   * Backwards-compatible with bnchdrff/json-api version.
   */
  protected function getId($school_profile) {
    return $school_profile->nid;
  }

}
