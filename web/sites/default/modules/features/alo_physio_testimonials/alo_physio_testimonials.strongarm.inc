<?php
/**
 * @file
 * alo_physio_testimonials.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function alo_physio_testimonials_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__testimonial';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'wide_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'sharerich_1' => array(
          'default' => array(
            'settings' => array(
              'sharerich_sets' => 'imported_set',
            ),
            'weight' => '100',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '2',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '100',
            'visible' => FALSE,
          ),
        ),
        'smart_paging' => array(
          'default' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => 0,
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => 3072,
              'smart_paging_word_count' => 512,
              'smart_paging_title_display_suffix' => TRUE,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => 0,
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => 3072,
              'smart_paging_word_count' => 512,
              'smart_paging_title_display_suffix' => TRUE,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '1',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'settings' => array(
              'smart_paging_settings_context' => 'content_type',
              'smart_paging_method' => 0,
              'smart_paging_pagebreak' => '<!--pagebreak-->',
              'smart_paging_character_count' => 3072,
              'smart_paging_word_count' => 512,
              'smart_paging_title_display_suffix' => TRUE,
              'smart_paging_title_suffix' => ': Page ',
            ),
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_testimonial';
  $strongarm->value = '0';
  $export['language_content_type_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_testimonial';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_testimonial';
  $strongarm->value = '1';
  $export['node_preview_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_testimonial';
  $strongarm->value = 0;
  $export['node_submitted_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_testimonials_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_testimonials_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_testimonials_pattern';
  $strongarm->value = 'testimonials/[node:title]';
  $export['pathauto_node_testimonials_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_testimonials_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_testimonials_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharerich_node_testimonial';
  $strongarm->value = '1';
  $export['sharerich_node_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_testimonials';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_testimonials'] = $strongarm;

  return $export;
}
