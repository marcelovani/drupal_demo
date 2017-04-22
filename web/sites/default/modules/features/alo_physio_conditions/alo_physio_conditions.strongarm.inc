<?php
/**
 * @file
 * alo_physio_conditions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function alo_physio_conditions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_therapies';
  $strongarm->value = '0';
  $export['language_content_type_therapies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_therapies';
  $strongarm->value = '1';
  $export['node_preview_therapies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_therapies';
  $strongarm->value = 0;
  $export['node_submitted_therapies'] = $strongarm;

  return $export;
}
