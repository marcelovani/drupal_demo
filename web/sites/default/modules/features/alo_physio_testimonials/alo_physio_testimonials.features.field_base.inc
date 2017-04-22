<?php
/**
 * @file
 * alo_physio_testimonials.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function alo_physio_testimonials_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_testimonial_type'
  $field_bases['field_testimonial_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_testimonial_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'tecar_page' => 'Tecar Therapy Page',
        'testimonials' => 'Testimonials Page',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
