<?php
/**
 * @file
 * alo_physio_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alo_physio_taxonomy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
