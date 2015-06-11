<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\SchoolSerializer.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Tobscure\JsonApi\Link;
use Drupal\esdportal_api\Serializers\SchoolProfileSerializer;
use Drupal\esdportal_api\EcDataUtils;

// Data serializers...
use Drupal\esdportal_api\Serializers\act_2011Serializer;
use Drupal\esdportal_api\Serializers\act_2012Serializer;
use Drupal\esdportal_api\Serializers\act_2013Serializer;
use Drupal\esdportal_api\Serializers\act_2014Serializer;
use Drupal\esdportal_api\Serializers\esd_hs_2013Serializer;
use Drupal\esdportal_api\Serializers\esd_hs_2014Serializer;
use Drupal\esdportal_api\Serializers\esd_hs_2015Serializer;
use Drupal\esdportal_api\Serializers\esd_k8_2013_r1Serializer;
use Drupal\esdportal_api\Serializers\esd_k8_2013Serializer;
use Drupal\esdportal_api\Serializers\esd_k8_2014Serializer;
use Drupal\esdportal_api\Serializers\esd_k8_2015Serializer;
use Drupal\esdportal_api\Serializers\fiveessentials_2013Serializer;
use Drupal\esdportal_api\Serializers\fiveessentials_2014Serializer;
use Drupal\esdportal_api\Serializers\fiveessentials_2015Serializer;
use Drupal\esdportal_api\Serializers\meap_2009Serializer;
use Drupal\esdportal_api\Serializers\meap_2010Serializer;
use Drupal\esdportal_api\Serializers\meap_2011Serializer;
use Drupal\esdportal_api\Serializers\meap_2012Serializer;
use Drupal\esdportal_api\Serializers\meap_2013Serializer;

/**
 * Serializes early childhood taxonomy terms.
 */
class SchoolSerializer extends SerializerAbstract {
  protected $type = 'schools';
  protected $link = ['school_profile'];
  protected $include = NULL;

  protected static $potentialDataTables;
  protected static $potentialDataTableNames;

  /**
   * Unsets any included data.
   */
  protected function attributes($school_term) {
    self::$potentialDataTables = \Drupal\esdportal_api\EcDataUtils::getDataTablesWithBcodes();
    self::$potentialDataTableNames = \Drupal\esdportal_api\EcDataUtils::extractDataTableNames(self::$potentialDataTables);

    // These turn into linkages:
    unset($school_term->school_profile);
    unset($school_term->school_profile_id);

    // These fields are private:
    unset($school_term->field_files);

    foreach (self::$potentialDataTableNames as $name) {
      unset($school_term->{$name});
    }

    return $school_term;
  }

  /**
   * Provides taxonomy term id as id.
   */
  protected function id($school_term) {
    return entity_extract_ids('taxonomy_term', $school_term)[0];
  }

  /**
   * Backwards compatibility with bnchdrff/json-api fork.
   */
  protected function getId($school_term) {
    return entity_extract_ids('taxonomy_term', $school_term)[0];
  }

  /**
   * Handles inclusion of school_profiles.
   */
  protected function school_profile() {
    return function ($school, $include, $included) {
      $serializer = new SchoolProfileSerializer($included);

      if (!$school->school_profile_id) {
        return NULL;
      }

      $school_profile = $serializer->resource($include ? $school->school_profile : $school->school_profile_id);

      $link = new Link($school_profile);

      return $link;
    };
  }

  /**
   * Dynamically construct methods for data tables with bcodes.
   *
   * @param string $method
   *   Should be a table_name, and will be converted to camelCase.
   */
  public function __call($method, $args) {
    self::$potentialDataTables = \Drupal\esdportal_api\EcDataUtils::getDataTablesWithBcodes();
    self::$potentialDataTableNames = \Drupal\esdportal_api\EcDataUtils::extractDataTableNames(self::$potentialDataTables);

    return function ($school, $include, $included) use ($method) {
      // The actual called method is underscore-separated...
      $table_name = $method;

      // ... But we want a method that is camelCased.
      $camelized_method = \Drupal\esdportal_api\EcDataUtils::underscoreToCamel($table_name);

      $class_name = 'Drupal\\esdportal_api\\Serializers\\' . $camelized_method . 'Serializer';

      // Legit data table name?
      if (!array_search($table_name, self::$potentialDataTableNames)) {
        return NULL;
      }

      $serializer = new $class_name($included);

      if (!$school->bcode) {
        return NULL;
      }

      if (!$school->{$table_name}) {
        return NULL;
      }

      $datum = $serializer->resource($include ? $school->{$table_name} : $school->bcode);

      $link = new Link($datum);

      return $link;
    };
  }

}
