<?php
/**
 * @file
 * alo_physio_taxonomy.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_taxonomy_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'category_children';
  $context->description = 'Displays a block with links to child categories';
  $context->tag = 'Category';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'taxonomy/term/*' => 'taxonomy/term/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-category_children-block' => array(
          'module' => 'views',
          'delta' => 'category_children-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Displays a block with links to child categories');
  $export['category_children'] = $context;

  return $export;
}
