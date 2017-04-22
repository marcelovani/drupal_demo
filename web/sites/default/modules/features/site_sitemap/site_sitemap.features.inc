<?php
/**
 * @file
 * site_sitemap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_sitemap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
