<?php
/**
 * @file
 * alo_physio_homepage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alo_physio_homepage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-call-to-action_contact-us:node/371
  $menu_links['menu-call-to-action_contact-us:node/371'] = array(
    'menu_name' => 'menu-call-to-action',
    'link_path' => 'node/371',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'class' => array(),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-call-to-action_contact-us:node/371',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-call-to-action_email-us:mailto:alo@alo-physiotherapy.co.uk
  $menu_links['menu-call-to-action_email-us:mailto:alo@alo-physiotherapy.co.uk'] = array(
    'menu_name' => 'menu-call-to-action',
    'link_path' => 'mailto:alo@alo-physiotherapy.co.uk',
    'router_path' => '',
    'link_title' => 'Email Us',
    'options' => array(
      'attributes' => array(
        'class' => array(),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-call-to-action_email-us:mailto:alo@alo-physiotherapy.co.uk',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-call-to-action_online-booking:node/19
  $menu_links['menu-call-to-action_online-booking:node/19'] = array(
    'menu_name' => 'menu-call-to-action',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Online Booking',
    'options' => array(
      'attributes' => array(
        'class' => array(),
        'title' => '',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'three columns',
        'style' => '',
      ),
      'identifier' => 'menu-call-to-action_online-booking:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact us');
  t('Email Us');
  t('Online Booking');


  return $menu_links;
}
