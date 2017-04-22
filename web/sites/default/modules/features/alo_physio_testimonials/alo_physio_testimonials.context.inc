<?php
/**
 * @file
 * alo_physio_testimonials.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_testimonials_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testimonials';
  $context->description = 'Testimonials content';
  $context->tag = 'Testimonials';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonials-teaser' => array(
          'module' => 'views',
          'delta' => 'testimonials-teaser',
          'region' => 'sidebar_second',
          'weight' => '-25',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Testimonials');
  t('Testimonials content');
  $export['testimonials'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testimonials_front';
  $context->description = 'Testimonials on front page';
  $context->tag = 'Testimonials';
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
        'views-testimonials-front' => array(
          'module' => 'views',
          'delta' => 'testimonials-front',
          'region' => 'info_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Testimonials');
  t('Testimonials on front page');
  $export['testimonials_front'] = $context;

  return $export;
}
