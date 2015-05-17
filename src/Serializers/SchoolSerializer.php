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
use Drupal\esdportal_api\EcDataUtils;

// data serializers...
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

class SchoolSerializer extends SerializerAbstract {
  protected $type = 'schools';
  protected $link = ['school_profile'];
  protected $include = null;

  protected static $potential_data_tables;
  protected static $potential_data_table_names;

  protected function attributes($school_term) {
    // these turn into linkages:
    unset($school_term->school_profile);
    unset($school_term->school_profile_id);
    unset($school_term->fiveessentials_2015);

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

  // dynamically construct methods for data tables with bcodes
  function __call($method, $args) {
    self::$potential_data_tables = \Drupal\esdportal_api\EcDataUtils::getDataTablesWithBcodes();
    self::$potential_data_table_names = \Drupal\esdportal_api\EcDataUtils::extractDataTableNames(self::$potential_data_tables);

    return function ($school, $include, $included) use ($method) {
      $table_name = $method;
      $class_name = 'Drupal\\esdportal_api\\Serializers\\' . $method . 'Serializer';

      // legit data table name?
      if (!array_search($table_name, self::$potential_data_table_names)) {
        return null;
      }

      $serializer = new $class_name($included);

      if (!$school->bcode) {
        return null;
      }

      $datum = $serializer->resource($include ? $school->{$table_name} : $school->bcode);

      $link = new Link($datum);

      return $link;
    };
  }

}
