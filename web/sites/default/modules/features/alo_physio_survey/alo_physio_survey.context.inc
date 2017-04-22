<?php
/**
 * @file
 * alo_physio_survey.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_survey_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'survey';
  $context->description = 'Survey';
  $context->tag = 'Blocks';
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
        'alo_physio_survey-survey' => array(
          'module' => 'alo_physio_survey',
          'delta' => 'survey',
          'region' => 'footer_wide_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Survey');
  $export['survey'] = $context;

  return $export;
}
