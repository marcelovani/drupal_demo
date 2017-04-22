<?php
/**
 * @file
 * alo_physio_alliances.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_alliances_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alo_physio_alliances_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function alo_physio_alliances_node_info() {
  $items = array(
    'alliance' => array(
      'name' => t('Alliance'),
      'base' => 'node_content',
      'description' => t('These will be listed in the Alliances page'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
