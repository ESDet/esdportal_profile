<?php
/**
 * @file
 * esdportal_e3_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function esdportal_e3_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'coach-context';
  $context->description = 'Coach Role Context';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Coach' => 'Coach',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-coach-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-coach-menu',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Coach Role Context');
  $export['coach-context'] = $context;

  return $export;
}
