<?php
/**
 * @file
 * alo_physio_ailments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_ailments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alo_physio_ailments_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function alo_physio_ailments_node_info() {
  $items = array(
    'ailments' => array(
      'name' => t('Ailment'),
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
