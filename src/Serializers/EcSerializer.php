<?php

/**
 * @file
 * Contains Drupal\esdportal_api\Serializers\EcSerializer.
 */

namespace Drupal\esdportal_api\Serializers;

use Tobscure\JsonApi\SerializerAbstract;
use Tobscure\JsonApi\Link;
use Drupal\esdportal_api\Serializers\EcProfileSerializer;
use Drupal\esdportal_api\Serializers\EcStateRatingSerializer;
use Drupal\esdportal_api\Serializers\EsdEl2014Serializer;
use Drupal\esdportal_api\Serializers\EsdEl2015Serializer;

/**
 * Serializes early childhood taxonomy terms.
 */
class EcSerializer extends SerializerAbstract {
  protected $type = 'ecs';
  protected $link = ['ec_profile', 'most_recent_ec_state_rating'];
  protected $include = NULL;

  protected static $potentialDataTables;
  protected static $potentialDataTableNames;

  /**
   * Removes linked info.
   */
  protected function attributes($ec_term) {
    self::$potentialDataTables = \Drupal\esdportal_api\EcDataUtils::getDataTablesWithProgramIds();
    self::$potentialDataTableNames = \Drupal\esdportal_api\EcDataUtils::extractDataTableNames(self::$potentialDataTables);

    // These turn into linkages:
    unset($ec_term->ec_profile);
    unset($ec_term->ec_profile_id);
    unset($ec_term->most_recent_ec_state_rating);
    unset($ec_term->most_recent_ec_state_rating_id);

    foreach (self::$potentialDataTableNames as $name) {
      unset($ec_term->{$name});
    }

    return $ec_term;
  }

  /**
   * Returns the id.
   */
  protected function id($ec_term) {
    return entity_extract_ids('taxonomy_term', $ec_term)[0];
  }
  /**
   * Same thing... backwards compatible with bnchdrff/json-api just in case.
   */
  protected function getId($ec_term) {
    return entity_extract_ids('taxonomy_term', $ec_term)[0];
  }

  /**
   * Handles inclusion of ec_profiles.
   */
  protected function ec_profile() {
    return function ($ec, $include, $included) {
      $serializer = new EcProfileSerializer($included);

      if (!$ec->ec_profile_id) {
        return NULL;
      }

      $ec_profile = $serializer->resource($include ? $ec->ec_profile : $ec->ec_profile_id);

      $link = new Link($ec_profile);

      return $link;
    };
  }

  /**
   * Handles inclusion of most_recent_ec_state_ratings.
   */
  protected function most_recent_ec_state_rating() {
    return function ($ec, $include, $included) {
      $serializer = new EcStateRatingSerializer($included);

      if (!isset($ec->most_recent_ec_state_rating)) {
        return NULL;
      }

      $most_recent_ec_state_rating = $serializer->resource($include ? $ec->most_recent_ec_state_rating : $ec->most_recent_ec_state_rating_id);

      $link = new Link($most_recent_ec_state_rating);

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
    self::$potentialDataTables = \Drupal\esdportal_api\EcDataUtils::getDataTablesWithProgramIds();
    self::$potentialDataTableNames = \Drupal\esdportal_api\EcDataUtils::extractDataTableNames(self::$potentialDataTables);

    return function ($ec, $include, $included) use ($method) {
      // The actual called method is underscore-separated...
      $table_name = $method;

      // ... But we want a method that is camelCased.
      $camelized_method = \Drupal\esdportal_api\EcDataUtils::underscoreToCamel($table_name);

      $class_name = 'Drupal\\esdportal_api\\Serializers\\' . $camelized_method . 'Serializer';

      // Legit data table name?
      if (!in_array($table_name, self::$potentialDataTableNames)) {
        return NULL;
      }

      $serializer = new $class_name($included);

      if (!$ec->program_id) {
        return NULL;
      }

      if (!$ec->{$table_name}) {
        return NULL;
      }

      $datum = $serializer->resource($include ? $ec->{$table_name} : $ec->program_id);

      $link = new Link($datum);

      return $link;
    };
  }

}
