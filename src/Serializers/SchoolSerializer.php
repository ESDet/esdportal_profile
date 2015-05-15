<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\SchoolSerializer.
 *
 * Serializes early childhood taxonomy terms.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Tobscure\JsonApi\Link;
use Drupal\esdportal_api\Serializers\SchoolProfileSerializer;

class SchoolSerializer extends SerializerAbstract {
  protected $type = 'schools';
  protected $link = ['school_profile'];
  protected $include = null;

  protected function attributes($school_term) {
    // these turn into linkages:
    unset($school_term->school_profile);
    unset($school_term->school_profile_id);

    return $school_term;
  }

  protected function id($school_term) {
    return entity_extract_ids('taxonomy_term', $school_term)[0];
  }
  protected function getId($school_term) {
    return entity_extract_ids('taxonomy_term', $school_term)[0];
  }

  protected function school_profile() {
    return function ($school, $include, $included) {
      $serializer = new SchoolProfileSerializer($included);

      if (!$school->school_profile_id) {
        return null;
      }

      $school_profile = $serializer->resource($include ? $school->school_profile : $school->school_profile_id);

      $link = new Link($school_profile);

      return $link;
    };
  }
}
