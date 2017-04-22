<?php
/**
 * @file
 * alo_physio_footer.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_footer_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'Footer blocks';
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
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_1',
          'weight' => '-10',
        ),
        'blog-recent' => array(
          'module' => 'blog',
          'delta' => 'recent',
          'region' => 'footer_2',
          'weight' => '-10',
        ),
        'menu-menu-booking' => array(
          'module' => 'menu',
          'delta' => 'menu-booking',
          'region' => 'footer_3',
          'weight' => '-8',
        ),
        'menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-footer',
          'region' => 'footer_4',
          'weight' => '-9',
        ),
        'alo_physio_footer-footer_social' => array(
          'module' => 'alo_physio_footer',
          'delta' => 'footer_social',
          'region' => 'footer_wide_top',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Footer blocks');
  $export['footer'] = $context;

  return $export;
}
