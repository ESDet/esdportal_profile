<?php
/**
 * @file
 * Useful helpers for the esdportal_api module.
 *
 * Contains:
 *   Drupal\esdportal_api\EcDataUtils.
 */

namespace Drupal\esdportal_api;

/**
 * Some static helpers.
 */
class EcDataUtils {
  /**
   * Given an ec entity, return its id.
   *
   * @param object $ec
   *   An early childhood taxonomy term.
   *
   * @return int|null entity id
   *   The taxonomy term's id.
   */
  public static function getEcId($ec) {
    if (isset($ec->field_esd_ec_id['und']) && isset($ec->field_esd_ec_id['und'][0]) && isset($ec->field_esd_ec_id['und'][0]['value'])) {
      return $ec->field_esd_ec_id['und'][0]['value'];
    }
    elseif (gettype($ec->field_esd_ec_id) == 'string') {
      return $ec->field_esd_ec_id;
    }
    else {
      return NULL;
    }
  }

  /**
   * Returns data tables that JOIN by buildingcode.
   *
   * @return array
   *   array of drupal data table objects
   */
  public static function getDataTablesWithBcodes() {
    return array_filter(data_get_all_tables(), function($table) {
      return (isset($table->meta['join']) && isset($table->meta['join']['field_data_field_bcode']));
    });
  }

  /**
   * Extracts table names from array of drupal data table objects.
   *
   * @return array
   *   table names
   */
  public static function extractDataTableNames($tables) {
    return array_keys($tables);
  }

  /**
   * As seen in commerce_services: flatten fields.
   *
   * For the ESD api, we:
   *   * flatten fields (remove i18n & change multiple fields to arrays)
   *   * output taxonomy term references as [{tid:'tid',name:'name'},{...}]
   *     or just {tid:'tid',name:'name'}
   *
   * The original docs:
   *
   * Flattens field value arrays on the given entity.
   *
   * Field flattening in Commerce Services involves reducing their value arrays to
   * just the current language of the entity and reducing fields with single
   * column schemas to simple scalar values or arrays of scalar values.
   *
   * Note that because this function irreparably alters an entity's structure, it
   * should only be called using a clone of the entity whose field value arrays
   * should be flattened. Otherwise the flattening will affect the entity as
   * stored in the entity cache, causing potential errors should that entity be
   * loaded and manipulated later in the same request.
   *
   * @param string $entity_type
   *   The machine-name entity type of the given entity.
   * @param object $cloned_entity
   *   A clone of the entity whose field value arrays should be flattened.
   */
  public static function flattenFields($entity_type, $cloned_entity) {
    $bundle = field_extract_bundle($entity_type, $cloned_entity);
    $clone_wrapper = entity_metadata_wrapper($entity_type, $cloned_entity);

    // Loop over every field instance on the given entity.
    foreach (field_info_instances($entity_type, $bundle) as $field_name => $instance) {
      // Set the field property to the raw wrapper value, which applies the
      // desired flattening of the value array.
      // For taxonomy term refs, format nicely using loadtermnames module 'name'
      if ($clone_wrapper->{$field_name}->type() == 'taxonomy_term') {
        $term = $clone_wrapper->{$field_name}->value();
        if ($cloned_entity->{$field_name}) {
          $cloned_entity->{$field_name} = ['tid' => $term->tid, 'name' => $term->name];
        }
      }
      elseif ($clone_wrapper->{$field_name}->type() == 'list<taxonomy_term>') {
        $new_val = [];
        foreach ($clone_wrapper->{$field_name}->value() as $term) {
          $new_val[] = ['tid' => $term->tid, 'name' => $term->name];
        }
        $cloned_entity->{$field_name} = $new_val;
      }
      else {
        $cloned_entity->{$field_name} = $clone_wrapper->{$field_name}->raw();
      }
    }
  }

  /**
   * Converts underscore_name to camelName.
   */
  public static function underscoreToCamel($underscore_name) {
    $underscore_name[0] = strtoupper($underscore_name[0]);

    return preg_replace_callback('/_([a-z0-9])/', function($c) {
      return strtoupper($c[1]);
    }, $underscore_name);
  }

  /**
   * Converts camelName to underscore_name.
   */
  public static function camelToUnderscore($camel_name) {
    return strtolower(preg_replace('/([a-z])([A-Z0-9])/', '$1_$2', $camel_name));
  }

}
