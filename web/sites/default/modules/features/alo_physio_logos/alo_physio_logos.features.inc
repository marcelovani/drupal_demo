<?php
/**
 * @file
 * alo_physio_logos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_logos_ctools_plugin_api($module = NULL, $api = NULL) {
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
function alo_physio_logos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function alo_physio_logos_image_default_styles() {
  $styles = array();

  // Exported image style: logo.
  $styles['logo'] = array(
    'label' => 'Logo',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 130,
          'height' => 50,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logos.
  $styles['logos'] = array(
    'label' => 'Logos',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 130,
          'height' => 50,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function alo_physio_logos_node_info() {
  $items = array(
    'logos' => array(
      'name' => t('Logos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
