<?php
/**
 * @file
 * Contains:
 *   Drupal\esdportal_api\EcDataUtils
 *
 */

namespace Drupal\esdportal_api;

class EcDataUtils {
  public static function getEcId($ec) {
    if(isset($ec->field_esd_ec_id['und']) && isset($ec->field_esd_ec_id['und'][0]) && isset($ec->field_esd_ec_id['und'][0]['value'])) {
      return $ec->field_esd_ec_id['und'][0]['value'];
    } else {
      return null;
    }
  }

  /**
   * As seen in commerce_services:
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
   * @param $entity_type
   *   The machine-name entity type of the given entity.
   * @param $cloned_entity
   *   A clone of the entity whose field value arrays should be flattened.
   */
  public static function flattenFields($entity_type, $cloned_entity) {
    xdebug_break();
    $bundle = field_extract_bundle($entity_type, $cloned_entity);
    $clone_wrapper = entity_metadata_wrapper($entity_type, $cloned_entity);

    // Loop over every field instance on the given entity.
    foreach (field_info_instances($entity_type, $bundle) as $field_name => $instance) {
      // Set the field property to the raw wrapper value, which applies the
      // desired flattening of the value array.
      $cloned_entity->{$field_name} = $clone_wrapper->{$field_name}->raw();
    }
  }
}
