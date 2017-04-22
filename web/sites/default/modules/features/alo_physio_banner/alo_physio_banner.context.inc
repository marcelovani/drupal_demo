<?php
/**
 * @file
 * alo_physio_banner.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_banner_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_banner';
  $context->description = 'Front banner';
  $context->tag = 'no tag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-banner-large_banner' => array(
          'module' => 'views',
          'delta' => 'banner-large_banner',
          'region' => 'banner',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front banner');
  t('no tag');
  $export['front_banner'] = $context;

  return $export;
}
