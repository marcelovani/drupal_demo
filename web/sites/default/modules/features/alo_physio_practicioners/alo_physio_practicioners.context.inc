<?php
/**
 * @file
 * alo_physio_practicioners.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_practicioners_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'practitioner_homepage';
  $context->description = 'Display team bloks';
  $context->tag = 'Practitioner';
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
        'views-our_team-block' => array(
          'module' => 'views',
          'delta' => 'our_team-block',
          'region' => 'services',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display team bloks');
  t('Practitioner');
  $export['practitioner_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'practitioner_page';
  $context->description = '';
  $context->tag = 'Practitioner';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-team' => 'our-team',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'acquia_marina' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_top' => 0,
          'header' => 0,
          'main_menu' => 0,
          'preface_top' => 0,
          'preface_bottom' => 0,
          'content' => 0,
          'postscript_top' => 0,
          'postscript_bottom' => 0,
          'footer' => 0,
          'node_top' => 0,
          'node_bottom' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'alo_physio' => array(
        'disable' => array(
          'highlighted' => 0,
          'search_box' => 0,
          'main_menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_top' => 0,
          'header' => 0,
          'preface_top' => 0,
          'content_top' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'postscript_bottom' => 0,
          'footer_message' => 0,
          'footer_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'fusion_starter_lite' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header' => 0,
          'main_menu' => 0,
          'content' => 0,
          'footer' => 0,
          'help' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'haiku' => array(
        'disable' => array(
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'services' => 0,
          'information' => 0,
          'front_blog' => 0,
          'recent_projects' => 0,
          'clients' => 0,
          'footer_1' => 0,
          'footer_2' => 0,
          'footer_3' => 0,
          'footer_full' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'kanji' => array(
        'disable' => array(
          'highlighted' => 0,
          'search_box' => 0,
          'main_menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_top' => 0,
          'header' => 0,
          'preface_top' => 0,
          'content_top' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'postscript_bottom' => 0,
          'footer_message' => 0,
          'footer_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'poetry' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'sidebar_second' => 'sidebar_second',
          'main_menu' => 0,
          'banner' => 0,
          'content' => 0,
          'services' => 0,
          'information' => 0,
          'front_blog' => 0,
          'recent_projects' => 0,
          'clients' => 0,
          'footer_1' => 0,
          'footer_2' => 0,
          'footer_3' => 0,
          'footer_full' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Practitioner');
  $export['practitioner_page'] = $context;

  return $export;
}
