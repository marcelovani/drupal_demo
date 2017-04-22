<?php
/**
 * @file
 * alo_physio_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = 'About us';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us*' => 'about-us*',
        'testimonials*' => 'testimonials*',
        'sobre*' => 'sobre*',
        'testemunhos*' => 'testemunhos*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-13',
        ),
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Blocks');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'booking';
  $context->description = 'Booking';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'booking*' => 'booking*',
        'agenda*' => 'agenda*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Booking');
  $export['booking'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'booking_block';
  $context->description = 'Booking block at the bottom of pages';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Booking block at the bottom of pages');
  $export['booking_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content';
  $context->description = 'Content';
  $context->tag = 'Content';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  $export['content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent_content';
  $context->description = 'Recent content block';
  $context->tag = 'Front Page';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_content-block' => array(
          'module' => 'views',
          'delta' => 'recent_content-block',
          'region' => 'recent_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page');
  t('Recent content block');
  $export['recent_content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sharerich';
  $context->description = 'Share buttons';
  $context->tag = 'Social';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'alliance' => 'alliance',
        'article' => 'article',
        'blog' => 'blog',
        'page' => 'page',
        'practitioner' => 'practitioner',
        'testimonial' => 'testimonial',
        'therapies' => 'therapies',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'ailments' => 'ailments',
        'ailments:page' => 'ailments:page',
        'alliances' => 'alliances',
        'alliances:page' => 'alliances:page',
        'articles' => 'articles',
        'articles:page' => 'articles:page',
        'articles_news' => 'articles_news',
        'articles_news:page' => 'articles_news:page',
        'articles_press' => 'articles_press',
        'articles_press:page' => 'articles_press:page',
        'articles_research' => 'articles_research',
        'articles_research:page' => 'articles_research:page',
        'practitioner' => 'practitioner',
        'testimonials' => 'testimonials',
        'testimonials:tecar_page' => 'testimonials:tecar_page',
        'testimonials:testimonials_page' => 'testimonials:testimonials_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sharerich-sharerich' => array(
          'module' => 'sharerich',
          'delta' => 'sharerich',
          'region' => 'content_bottom',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Share buttons');
  t('Social');
  $export['sharerich'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_second';
  $context->description = 'Hide Sidebar second on pages';
  $context->tag = 'No tag';
  $context->conditions = array();
  $context->reactions = array(
    'region' => array(
      'acquia_marina' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_top' => 0,
          'header' => 0,
          'main_menu' => 0,
          'preface_top' => 0,
          'preface_bottom' => 0,
          'content' => 0,
          'postscript_top' => 0,
          'postscript_bottom' => 0,
          'footer' => 0,
          'node_top' => 0,
          'node_bottom' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'alo_physio' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'highlighted' => 0,
          'search_box' => 0,
          'main_menu' => 0,
          'sidebar_first' => 0,
          'header_top' => 0,
          'header' => 0,
          'preface_top' => 0,
          'content_top' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'postscript_bottom' => 0,
          'footer_message' => 0,
          'footer_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'fusion_starter_lite' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header' => 0,
          'main_menu' => 0,
          'content' => 0,
          'footer' => 0,
          'help' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'kanji' => array(
        'disable' => array(
          'highlighted' => 0,
          'search_box' => 0,
          'main_menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_top' => 0,
          'header' => 0,
          'preface_top' => 0,
          'content_top' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'postscript_bottom' => 0,
          'footer_message' => 0,
          'footer_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hide Sidebar second on pages');
  t('No tag');
  $export['sidebar_second'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_blocks';
  $context->description = 'Sitewide blocks';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '29',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Sitewide blocks');
  $export['sitewide_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tecar';
  $context->description = 'Tecar';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Tecar');
  $export['tecar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'treatments';
  $context->description = 'Treatments';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'treatments*' => 'treatments*',
        'tecar-therapy*' => 'tecar-therapy*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-20' => array(
          'module' => 'menu_block',
          'delta' => '20',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Treatments');
  $export['treatments'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'welcome';
  $context->description = 'Displays the info block';
  $context->tag = 'Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-welcome' => array(
          'module' => 'boxes',
          'delta' => 'welcome',
          'region' => 'info_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');
  t('Displays the info block');
  $export['welcome'] = $context;

  return $export;
}
