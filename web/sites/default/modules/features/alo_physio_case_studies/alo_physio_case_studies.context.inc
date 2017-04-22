<?php
/**
 * @file
 * alo_physio_case_studies.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_case_studies_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'case_studies';
  $context->description = 'Case studies blocks';
  $context->tag = 'Blocks';
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
        'views-case_studies-teaser' => array(
          'module' => 'views',
          'delta' => 'case_studies-teaser',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Case studies blocks');
  $export['case_studies'] = $context;

  return $export;
}
