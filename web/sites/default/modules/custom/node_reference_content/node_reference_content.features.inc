<?php
/**
 * @file
 * node_reference_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function node_reference_content_node_info() {
  $items = array(
    'test' => array(
      'name' => t('Test'),
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
