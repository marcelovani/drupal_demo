<?php
/**
 * @file
 * site_sitemap.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function site_sitemap_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitemap';
  $context->description = 'Sitemap';
  $context->tag = 'Sitemap';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sitemap' => 'sitemap',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-secondary-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-secondary-menu',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitemap');
  $export['sitemap'] = $context;

  return $export;
}
