<?php
/**
 * @file
 * alo_physio_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function alo_physio_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blog';
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
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
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
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
            'weight' => '2',
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
            'weight' => '4',
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
        'sharerich_1' => array(
          'default' => array(
            'settings' => array(
              'sharerich_sets' => 'imported_set',
            ),
            'weight' => '100',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'settings' => array(
              'sharerich_sets' => 0,
            ),
            'weight' => '5',
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
      ),
    ),
  );
  $export['field_bundle_settings_node__blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharerich_node_blog';
  $strongarm->value = '1';
  $export['sharerich_node_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_blog';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_blog'] = $strongarm;

  return $export;
}
