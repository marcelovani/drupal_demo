<?php
/**
 * @file
 * alo_physio_practicioners.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function alo_physio_practicioners_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_practitioner';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_practitioner';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_practitioner';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__practitioner';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'entityreference_view_widget' => array(
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
        'title' => array(
          'weight' => '0',
        ),
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'xmlsitemap' => array(
          'weight' => '14',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'entityreference_view_widget' => array(
            'weight' => '9',
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
            'weight' => '11',
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
            'weight' => '12',
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
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'sharerich_1' => array(
          'default' => array(
            'settings' => array(
              'sharerich_sets' => 'imported_set',
            ),
            'weight' => '12',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '7',
            'visible' => FALSE,
          ),
          'wide_teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'sharerich_2' => array(
          'default' => array(
            'settings' => array(
              'sharerich_sets' => 'imported_set',
            ),
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_practitioner';
  $strongarm->value = '0';
  $export['language_content_type_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_practitioner';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_practitioner';
  $strongarm->value = '1';
  $export['node_preview_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_practitioner';
  $strongarm->value = 0;
  $export['node_submitted_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practitioner_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_practitioner_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practitioner_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_practitioner_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practitioner_pattern';
  $strongarm->value = 'our-team/[node:title]';
  $export['pathauto_node_practitioner_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practitioner_pt-br_pattern';
  $strongarm->value = '';
  $export['pathauto_node_practitioner_pt-br_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practitioner_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_practitioner_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharerich_node_practitioner';
  $strongarm->value = '1';
  $export['sharerich_node_practitioner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_practitioner';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_practitioner'] = $strongarm;

  return $export;
}
