<?php
/**
 * @file
 * alo_physio_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function alo_physio_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-booking.
  $menus['menu-booking'] = array(
    'menu_name' => 'menu-booking',
    'title' => 'Booking',
    'description' => '',
  );
  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Links',
    'description' => 'Footer links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Booking');
  t('Footer links');
  t('Links');


  return $menus;
}
