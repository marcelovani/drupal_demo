<?php
/**
 * @file
 * alo_physio_seo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function alo_physio_seo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_meta';
  $context->description = 'Homepage metatags';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'ALO Physiotherapy | Sports Injury & Pain Clinic in Harley Street',
            'default' => 'ALO Physiotherapy | Sports Injury & Pain Clinic in Harley Street',
          ),
          'description' => array(
            'value' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'abstract' => array(
            'value' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
            'default' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'standout' => array(
            'value' => '',
            'default' => '',
          ),
          'rating' => array(
            'value' => '',
          ),
          'referrer' => array(
            'value' => '',
          ),
          'generator' => array(
            'value' => 'Drupal 7 (http://drupal.org)',
            'default' => 'Drupal 7 (http://drupal.org)',
          ),
          'rights' => array(
            'value' => '',
            'default' => '',
          ),
          'image_src' => array(
            'value' => '',
            'default' => '',
          ),
          'canonical' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'shortlink' => array(
            'value' => '[current-page:url:unaliased]',
            'default' => '[current-page:url:unaliased]',
          ),
          'publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'author' => array(
            'value' => '',
            'default' => '',
          ),
          'original-source' => array(
            'value' => '',
            'default' => '',
          ),
          'prev' => array(
            'value' => '',
          ),
          'next' => array(
            'value' => '',
          ),
          'revisit-after' => array(
            'value' => '',
            'period' => '',
            'default' => '',
          ),
          'content-language' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.position' => array(
            'value' => '',
          ),
          'geo.placename' => array(
            'value' => '',
          ),
          'geo.region' => array(
            'value' => '',
          ),
          'icbm' => array(
            'value' => '',
          ),
          'refresh' => array(
            'value' => '',
          ),
          'fb:admins' => array(
            'value' => '',
            'default' => '',
          ),
          'fb:app_id' => array(
            'value' => '',
            'default' => '',
          ),
          'og:site_name' => array(
            'value' => '[site:name]',
            'default' => '[site:name]',
          ),
          'og:type' => array(
            'value' => 'article',
            'default' => 'article',
          ),
          'og:url' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'og:title' => array(
            'value' => '[current-page:title]',
            'default' => '[current-page:title]',
          ),
          'og:determiner' => array(
            'value' => '',
            'default' => '',
          ),
          'og:description' => array(
            'value' => '',
            'default' => '',
          ),
          'og:updated_time' => array(
            'value' => '',
            'default' => '',
          ),
          'og:see_also' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:url' => array(
            'value' => '',
          ),
          'og:image:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:type' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:latitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:longitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:street_address' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locality' => array(
            'value' => '',
            'default' => '',
          ),
          'og:region' => array(
            'value' => '',
            'default' => '',
          ),
          'og:postal_code' => array(
            'value' => '',
            'default' => '',
          ),
          'og:country_name' => array(
            'value' => '',
            'default' => '',
          ),
          'og:email' => array(
            'value' => '',
            'default' => '',
          ),
          'og:phone_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:fax_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale:alternate' => array(
            'value' => '',
            'default' => '',
          ),
          'article:author' => array(
            'value' => '',
            'default' => '',
          ),
          'article:publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'article:section' => array(
            'value' => '',
            'default' => '',
          ),
          'article:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'article:published_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:modified_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:expiration_time' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:first_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:last_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:username' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:gender' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:type' => array(
            'value' => '',
            'default' => '',
          ),
          'book:author' => array(
            'value' => '',
            'default' => '',
          ),
          'book:isbn' => array(
            'value' => '',
            'default' => '',
          ),
          'book:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'book:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:type' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor' => array(
            'value' => '',
          ),
          'video:actor:role' => array(
            'value' => '',
          ),
          'video:director' => array(
            'value' => '',
          ),
          'video:writer' => array(
            'value' => '',
          ),
          'video:duration' => array(
            'value' => '',
          ),
          'video:release_date' => array(
            'value' => '',
          ),
          'video:tag' => array(
            'value' => '',
          ),
          'video:series' => array(
            'value' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage metatags');
  t('Metatag');
  $export['home_meta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'metatag_case_studies';
  $context->description = 'Overrides for case studies';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'case-studies*' => 'case-studies*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[current-page:title] | [site:name]',
            'default' => 'ALO Physiotherapy | Sports Injury & Pain Clinic in Harley Street',
          ),
          'description' => array(
            'value' => '',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'abstract' => array(
            'value' => '',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
            'default' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'standout' => array(
            'value' => '',
            'default' => '',
          ),
          'rating' => array(
            'value' => '',
          ),
          'referrer' => array(
            'value' => '',
          ),
          'generator' => array(
            'value' => 'Drupal 7 (http://drupal.org)',
            'default' => 'Drupal 7 (http://drupal.org)',
          ),
          'rights' => array(
            'value' => '',
            'default' => '',
          ),
          'image_src' => array(
            'value' => '',
            'default' => '',
          ),
          'canonical' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'shortlink' => array(
            'value' => '[current-page:url:unaliased]',
            'default' => '[current-page:url:unaliased]',
          ),
          'publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'author' => array(
            'value' => '',
            'default' => '',
          ),
          'original-source' => array(
            'value' => '',
            'default' => '',
          ),
          'prev' => array(
            'value' => '',
          ),
          'next' => array(
            'value' => '',
          ),
          'revisit-after' => array(
            'value' => '',
            'period' => '',
            'default' => '',
          ),
          'content-language' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.position' => array(
            'value' => '',
          ),
          'geo.placename' => array(
            'value' => '',
          ),
          'geo.region' => array(
            'value' => '',
          ),
          'icbm' => array(
            'value' => '',
          ),
          'refresh' => array(
            'value' => '',
          ),
          'fb:admins' => array(
            'value' => '',
            'default' => '',
          ),
          'fb:app_id' => array(
            'value' => '',
            'default' => '',
          ),
          'og:site_name' => array(
            'value' => '[site:name]',
            'default' => '[site:name]',
          ),
          'og:type' => array(
            'value' => 'article',
            'default' => 'article',
          ),
          'og:url' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'og:title' => array(
            'value' => '[current-page:title]',
            'default' => '[current-page:title]',
          ),
          'og:determiner' => array(
            'value' => '',
            'default' => '',
          ),
          'og:description' => array(
            'value' => '',
            'default' => '',
          ),
          'og:updated_time' => array(
            'value' => '',
            'default' => '',
          ),
          'og:see_also' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:url' => array(
            'value' => '',
          ),
          'og:image:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:type' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:latitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:longitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:street_address' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locality' => array(
            'value' => '',
            'default' => '',
          ),
          'og:region' => array(
            'value' => '',
            'default' => '',
          ),
          'og:postal_code' => array(
            'value' => '',
            'default' => '',
          ),
          'og:country_name' => array(
            'value' => '',
            'default' => '',
          ),
          'og:email' => array(
            'value' => '',
            'default' => '',
          ),
          'og:phone_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:fax_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale:alternate' => array(
            'value' => '',
            'default' => '',
          ),
          'article:author' => array(
            'value' => '',
            'default' => '',
          ),
          'article:publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'article:section' => array(
            'value' => '',
            'default' => '',
          ),
          'article:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'article:published_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:modified_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:expiration_time' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:first_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:last_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:username' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:gender' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:type' => array(
            'value' => '',
            'default' => '',
          ),
          'book:author' => array(
            'value' => '',
            'default' => '',
          ),
          'book:isbn' => array(
            'value' => '',
            'default' => '',
          ),
          'book:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'book:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:type' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor' => array(
            'value' => '',
          ),
          'video:actor:role' => array(
            'value' => '',
          ),
          'video:director' => array(
            'value' => '',
          ),
          'video:writer' => array(
            'value' => '',
          ),
          'video:duration' => array(
            'value' => '',
          ),
          'video:release_date' => array(
            'value' => '',
          ),
          'video:tag' => array(
            'value' => '',
          ),
          'video:series' => array(
            'value' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  t('Overrides for case studies');
  $export['metatag_case_studies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'metatag_our_team';
  $context->description = 'Our team';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'our-team*' => 'our-team*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Our Team | Physiotherapists at ALO Physiotherapy clinic, Harley street, London',
            'default' => 'ALO Physiotherapy | Sports Injury & Pain Clinic in Harley Street, London',
          ),
          'description' => array(
            'value' => 'Our physiotherapy practitioners are highly experienced and passionate',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'abstract' => array(
            'value' => 'Our physiotherapy practitioners are highly experienced and passionate',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
            'default' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'standout' => array(
            'value' => '',
            'default' => '',
          ),
          'rating' => array(
            'value' => '',
            'default' => '',
          ),
          'referrer' => array(
            'value' => '',
            'default' => '',
          ),
          'generator' => array(
            'value' => 'Drupal 7 (http://drupal.org)',
            'default' => 'Drupal 7 (http://drupal.org)',
          ),
          'rights' => array(
            'value' => '',
            'default' => '',
          ),
          'image_src' => array(
            'value' => '',
            'default' => '',
          ),
          'canonical' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'shortlink' => array(
            'value' => '[current-page:url:unaliased]',
            'default' => '[current-page:url:unaliased]',
          ),
          'publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'author' => array(
            'value' => '',
            'default' => '',
          ),
          'original-source' => array(
            'value' => '',
            'default' => '',
          ),
          'prev' => array(
            'value' => '',
            'default' => '',
          ),
          'next' => array(
            'value' => '',
            'default' => '',
          ),
          'revisit-after' => array(
            'value' => '',
            'period' => '',
            'default' => '',
          ),
          'content-language' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.position' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.placename' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.region' => array(
            'value' => '',
            'default' => '',
          ),
          'icbm' => array(
            'value' => '',
            'default' => '',
          ),
          'refresh' => array(
            'value' => '',
            'default' => '',
          ),
          'fb:admins' => array(
            'value' => '',
            'default' => '',
          ),
          'fb:app_id' => array(
            'value' => '',
            'default' => '',
          ),
          'og:site_name' => array(
            'value' => '[site:name]',
            'default' => '[site:name]',
          ),
          'og:type' => array(
            'value' => 'article',
            'default' => 'article',
          ),
          'og:url' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'og:title' => array(
            'value' => '[current-page:title]',
            'default' => '[current-page:title]',
          ),
          'og:determiner' => array(
            'value' => '',
            'default' => '',
          ),
          'og:description' => array(
            'value' => '',
            'default' => '',
          ),
          'og:updated_time' => array(
            'value' => '',
            'default' => '',
          ),
          'og:see_also' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:type' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:latitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:longitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:street_address' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locality' => array(
            'value' => '',
            'default' => '',
          ),
          'og:region' => array(
            'value' => '',
            'default' => '',
          ),
          'og:postal_code' => array(
            'value' => '',
            'default' => '',
          ),
          'og:country_name' => array(
            'value' => '',
            'default' => '',
          ),
          'og:email' => array(
            'value' => '',
            'default' => '',
          ),
          'og:phone_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:fax_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale:alternate' => array(
            'value' => '',
            'default' => '',
          ),
          'article:author' => array(
            'value' => '',
            'default' => '',
          ),
          'article:publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'article:section' => array(
            'value' => '',
            'default' => '',
          ),
          'article:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'article:published_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:modified_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:expiration_time' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:first_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:last_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:username' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:gender' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:type' => array(
            'value' => '',
            'default' => '',
          ),
          'book:author' => array(
            'value' => '',
            'default' => '',
          ),
          'book:isbn' => array(
            'value' => '',
            'default' => '',
          ),
          'book:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'book:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:type' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor:role' => array(
            'value' => '',
            'default' => '',
          ),
          'video:director' => array(
            'value' => '',
            'default' => '',
          ),
          'video:writer' => array(
            'value' => '',
            'default' => '',
          ),
          'video:duration' => array(
            'value' => '',
            'default' => '',
          ),
          'video:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'video:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'video:series' => array(
            'value' => '',
            'default' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  t('Our team');
  $export['metatag_our_team'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'metatag_testimonials';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'testimonials*' => 'testimonials*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[current-page:title] | [site:name] - Testimonials',
            'default' => 'ALO Physiotherapy | Sports Injury & Pain Clinic in Harley Street',
          ),
          'description' => array(
            'value' => '',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'abstract' => array(
            'value' => '',
            'default' => 'Specialist physio for pain and sports injury clinic situated in Harley Street. We offer advanced diagnosis and treatments for Sports Injury, Neck, Shoulder, Back and Sciatica pain',
          ),
          'keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
            'default' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'standout' => array(
            'value' => '',
            'default' => '',
          ),
          'rating' => array(
            'value' => '',
          ),
          'referrer' => array(
            'value' => '',
          ),
          'generator' => array(
            'value' => 'Drupal 7 (http://drupal.org)',
            'default' => 'Drupal 7 (http://drupal.org)',
          ),
          'rights' => array(
            'value' => '',
            'default' => '',
          ),
          'image_src' => array(
            'value' => '',
            'default' => '',
          ),
          'canonical' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'shortlink' => array(
            'value' => '[current-page:url:unaliased]',
            'default' => '[current-page:url:unaliased]',
          ),
          'publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'author' => array(
            'value' => '',
            'default' => '',
          ),
          'original-source' => array(
            'value' => '',
            'default' => '',
          ),
          'prev' => array(
            'value' => '',
          ),
          'next' => array(
            'value' => '',
          ),
          'revisit-after' => array(
            'value' => '',
            'period' => '',
            'default' => '',
          ),
          'content-language' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.position' => array(
            'value' => '',
          ),
          'geo.placename' => array(
            'value' => '',
          ),
          'geo.region' => array(
            'value' => '',
          ),
          'icbm' => array(
            'value' => '',
          ),
          'refresh' => array(
            'value' => '',
          ),
          'fb:admins' => array(
            'value' => '',
            'default' => '',
          ),
          'fb:app_id' => array(
            'value' => '',
            'default' => '',
          ),
          'og:site_name' => array(
            'value' => '[site:name]',
            'default' => '[site:name]',
          ),
          'og:type' => array(
            'value' => 'article',
            'default' => 'article',
          ),
          'og:url' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'og:title' => array(
            'value' => '[current-page:title]',
            'default' => '[current-page:title]',
          ),
          'og:determiner' => array(
            'value' => '',
            'default' => '',
          ),
          'og:description' => array(
            'value' => '',
            'default' => '',
          ),
          'og:updated_time' => array(
            'value' => '',
            'default' => '',
          ),
          'og:see_also' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:url' => array(
            'value' => '',
          ),
          'og:image:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:type' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:latitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:longitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:street_address' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locality' => array(
            'value' => '',
            'default' => '',
          ),
          'og:region' => array(
            'value' => '',
            'default' => '',
          ),
          'og:postal_code' => array(
            'value' => '',
            'default' => '',
          ),
          'og:country_name' => array(
            'value' => '',
            'default' => '',
          ),
          'og:email' => array(
            'value' => '',
            'default' => '',
          ),
          'og:phone_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:fax_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale:alternate' => array(
            'value' => '',
            'default' => '',
          ),
          'article:author' => array(
            'value' => '',
            'default' => '',
          ),
          'article:publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'article:section' => array(
            'value' => '',
            'default' => '',
          ),
          'article:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'article:published_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:modified_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:expiration_time' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:first_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:last_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:username' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:gender' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:type' => array(
            'value' => '',
            'default' => '',
          ),
          'book:author' => array(
            'value' => '',
            'default' => '',
          ),
          'book:isbn' => array(
            'value' => '',
            'default' => '',
          ),
          'book:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'book:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:type' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor' => array(
            'value' => '',
          ),
          'video:actor:role' => array(
            'value' => '',
          ),
          'video:director' => array(
            'value' => '',
          ),
          'video:writer' => array(
            'value' => '',
          ),
          'video:duration' => array(
            'value' => '',
          ),
          'video:release_date' => array(
            'value' => '',
          ),
          'video:tag' => array(
            'value' => '',
          ),
          'video:series' => array(
            'value' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['metatag_testimonials'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'seo';
  $context->description = 'SEO Links';
  $context->tag = 'Navigation';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'seo admin' => 'seo admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-seo' => array(
          'module' => 'menu',
          'delta' => 'menu-seo',
          'region' => 'sidebar_second',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation');
  t('SEO Links');
  $export['seo'] = $context;

  return $export;
}
