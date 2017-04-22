<?php
/**
 * @file
 * alo_physio_homepage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function alo_physio_homepage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-call-to-action.
  $menus['menu-call-to-action'] = array(
    'menu_name' => 'menu-call-to-action',
    'title' => 'Call to action',
    'description' => 'Display call to action buttons',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Call to action');
  t('Display call to action buttons');


  return $menus;
}
