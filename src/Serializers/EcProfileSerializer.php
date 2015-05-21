<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcProfileSerializer.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
/**
 * Serializes early childhood center profiles.
 */
class EcProfileSerializer extends SerializerAbstract {
  protected $type = 'ec_profiles';

  /**
   * Nothing special here.
   */
  protected function attributes($ec_profile) {
    return $ec_profile;
  }

  /**
   * Provides the id.
   */
  protected function id($ec_profile) {
    return $ec_profile->nid;
  }
  /**
   * For backwards compatibility... do the same thing.
   */
  protected function getId($ec_profile) {
    return $ec_profile->nid;
  }

}
