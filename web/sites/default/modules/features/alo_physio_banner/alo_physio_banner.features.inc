<?php
/**
 * @file
 * alo_physio_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_banner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alo_physio_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function alo_physio_banner_image_default_styles() {
  $styles = array();

  // Exported image style: large_banner.
  $styles['large_banner'] = array(
    'label' => 'Large Banner 1000x333',
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 333,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      24 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1000,
          'height' => 333,
          'anchor' => 'center-center',
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function alo_physio_banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Used to create banners on the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
