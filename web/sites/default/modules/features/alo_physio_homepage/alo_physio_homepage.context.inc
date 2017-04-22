<?php
/**
 * @file
 * alo_physio_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Homepage';
  $context->tag = 'Alo-physio';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'garland' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'content' => 0,
          'header' => 0,
          'footer' => 0,
          'highlighted' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'haiku' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'content' => 0,
          'sidebar_first' => 0,
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
      'poetry' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'main_menu' => 0,
          'banner' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'services' => 0,
          'information' => 0,
          'info_left' => 0,
          'info_right' => 0,
          'front_blog' => 0,
          'recent_content' => 0,
          'recent_projects' => 0,
          'logos' => 0,
          'clients' => 0,
          'footer_1' => 0,
          'footer_2' => 0,
          'footer_3' => 0,
          'footer_4' => 0,
          'footer_wide_top' => 0,
          'footer_wide_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alo-physio');
  t('Homepage');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_call_to_action_buttons';
  $context->description = 'Call to action buttons';
  $context->tag = 'Homepage';
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
        'menu-menu-call-to-action' => array(
          'module' => 'menu',
          'delta' => 'menu-call-to-action',
          'region' => 'call_to_action',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => '0',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Call to action buttons');
  t('Homepage');
  $export['homepage_call_to_action_buttons'] = $context;

  return $export;
}
