<?php
/**
 * @file
 * alo_physio_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alo_physio_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
        'menu_token_link_path' => '',
      ),
      'alter' => TRUE,
      'langcode' => 'en',
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_blog:blog
  $menu_links['menu-secondary-menu_blog:blog'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_contact-us:node/371
  $menu_links['menu-secondary-menu_contact-us:node/371'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/371',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_contact-us:node/371',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_google-analytics:admin/config/system/googleanalytics
  $menu_links['menu-seo_google-analytics:admin/config/system/googleanalytics'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/system/googleanalytics',
    'router_path' => 'admin/config/system/googleanalytics',
    'link_title' => 'Google Analytics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_google-analytics:admin/config/system/googleanalytics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_metatags:admin/config/search/metatags
  $menu_links['menu-seo_metatags:admin/config/search/metatags'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/search/metatags',
    'router_path' => 'admin/config/search/metatags',
    'link_title' => 'Metatags',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_metatags:admin/config/search/metatags',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Contact us');
  t('Google Analytics');
  t('Home');
  t('Metatags');


  return $menu_links;
}
