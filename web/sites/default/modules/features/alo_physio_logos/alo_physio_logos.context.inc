<?php
/**
 * @file
 * alo_physio_logos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_logos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logos';
  $context->description = 'Display insurance logos';
  $context->tag = 'Footer';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-logos-block' => array(
          'module' => 'views',
          'delta' => 'logos-block',
          'region' => 'logos',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display insurance logos');
  t('Footer');
  $export['logos'] = $context;

  return $export;
}
