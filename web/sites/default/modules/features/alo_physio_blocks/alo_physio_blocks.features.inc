<?php
/**
 * @file
 * alo_physio_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
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
function alo_physio_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
