<?php
/**
 * @file
 * alo_physio_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}