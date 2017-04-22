<?php
/**
 * @file
 * alo_physio_social.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alo_physio_social_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "sharerich" && $api == "default_sharerich_sets") {
    return array("version" => "1");
  }
}
