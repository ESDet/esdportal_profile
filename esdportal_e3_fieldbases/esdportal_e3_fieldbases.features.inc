<?php
/**
 * @file
 * esdportal_e3_fieldbases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esdportal_e3_fieldbases_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
