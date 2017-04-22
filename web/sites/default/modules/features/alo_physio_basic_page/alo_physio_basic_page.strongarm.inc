<?php
/**
 * @file
 * alo_physio_basic_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function alo_physio_basic_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'wide_teaser' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'language' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'entityreference_view_widget' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'sharerich_1' => array(
          'default' => array(
            'settings' => array(
              'sharerich_sets' => 'imported_set',
            ),
            'weight' => '4',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '4',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '5',
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
            'weight' => '3',
            'visible' => TRUE,
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
            'weight' => '3',
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
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '0';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharerich_node_page';
  $strongarm->value = '1';
  $export['sharerich_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_page';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_page'] = $strongarm;

  return $export;
}
