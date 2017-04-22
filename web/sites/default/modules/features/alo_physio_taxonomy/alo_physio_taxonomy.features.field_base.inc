<?php
/**
 * @file
 * alo_physio_taxonomy.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function alo_physio_taxonomy_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'synonyms_synonym'
  $field_bases['synonyms_synonym'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'synonyms_synonym',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
