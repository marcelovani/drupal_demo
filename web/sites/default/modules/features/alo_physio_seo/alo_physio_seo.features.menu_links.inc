<?php
/**
 * @file
 * alo_physio_seo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alo_physio_seo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-seo_alchemy:admin/config/services/alchemy
  $menu_links['menu-seo_alchemy:admin/config/services/alchemy'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/services/alchemy',
    'router_path' => 'admin/config/services/alchemy',
    'link_title' => 'Alchemy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_alchemy:admin/config/services/alchemy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_clear-caches:admin_menu/flush-cache
  $menu_links['menu-seo_clear-caches:admin_menu/flush-cache'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin_menu/flush-cache',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Clear caches',
    'options' => array(
      'query' => array(
        'token' => 'YCDYHsJZE261unIZYflLTdsiBI8Onyema7Oh299zacI',
        'destination' => 'admin/config/development/performance',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_clear-caches:admin_menu/flush-cache',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_content-optimizer:admin/config/content/contentanalysis/analyzers
  $menu_links['menu-seo_content-optimizer:admin/config/content/contentanalysis/analyzers'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/content/contentanalysis/analyzers',
    'router_path' => 'admin/config/content/contentanalysis/analyzers',
    'link_title' => 'Content Optimizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_content-optimizer:admin/config/content/contentanalysis/analyzers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_global-redirect:admin/config/system/globalredirect
  $menu_links['menu-seo_global-redirect:admin/config/system/globalredirect'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/system/globalredirect',
    'router_path' => 'admin/config/system/globalredirect',
    'link_title' => 'Global Redirect',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_global-redirect:admin/config/system/globalredirect',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_keyword-research:admin/config/search
  $menu_links['menu-seo_keyword-research:admin/config/search'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Keyword Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_keyword-research:admin/config/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_manage-content:admin/content
  $menu_links['menu-seo_manage-content:admin/content'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_manage-content:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_redirect:admin/config/search/redirect/settings
  $menu_links['menu-seo_redirect:admin/config/search/redirect/settings'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/search/redirect/settings',
    'router_path' => 'admin/config/search/redirect/settings',
    'link_title' => 'Redirect',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_redirect:admin/config/search/redirect/settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_seo-tools:admin/config/search/seotools
  $menu_links['menu-seo_seo-tools:admin/config/search/seotools'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/config/search/seotools',
    'router_path' => 'admin/config/search/seotools',
    'link_title' => 'SEO Tools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_seo-tools:admin/config/search/seotools',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-seo_taxonomy:admin/structure/taxonomy
  $menu_links['menu-seo_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-seo',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-seo_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alchemy');
  t('Clear caches');
  t('Content Optimizer');
  t('Global Redirect');
  t('Keyword Research');
  t('Manage Content');
  t('Redirect');
  t('SEO Tools');
  t('Taxonomy');


  return $menu_links;
}
