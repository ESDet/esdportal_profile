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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'e3-admin-context';
  $context->description = 'E3 Admin';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'E3 Admin' => 'E3 Admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-e3-admin' => array(
          'module' => 'menu',
          'delta' => 'menu-e3-admin',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('E3 Admin');
  $export['e3-admin-context'] = $context;

  return $export;
}
