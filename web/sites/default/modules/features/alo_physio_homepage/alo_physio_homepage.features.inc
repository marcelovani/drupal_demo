<?php
/**
 * @file
 * alo_physio_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
