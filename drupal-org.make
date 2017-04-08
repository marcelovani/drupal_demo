; drush make -y --no-core --contrib-destination=. drupal-org.make

api = 2
includes[] = drupal-org-contrib.make

projects[sharerich][subdir] = contrib
projects[sharerich][version] = 2.5

projects[multipage_navigation][subdir] = contrib
projects[multipage_navigation][version] = 2.0

projects[captcha_keypad][subdir] = contrib
projects[captcha_keypad][version] = 1.1

projects[wysiwyg_boxout][subdir] = contrib
projects[wysiwyg_boxout][version] = 1.1

projects[primary_field][subdir] = contrib
projects[primary_field][version] = 1.0

projects[feedbackify][subdir] = contrib
projects[feedbackify][version] = 1.1

projects[amazon_wysiwyg][subdir] = contrib
projects[amazon_wysiwyg][version] = 1.0-alpha1

projects[blocks_mass_cache][subdir] = contrib
projects[blocks_mass_cache][version] = 1.4

projects[cache_purger][subdir] = contrib
projects[cache_purger][version] = 1.2

projects[wysiwyg_smart_paging_seo][subdir] = contrib
projects[wysiwyg_smart_paging_seo][version] = 1.2

projects[context_admin_exclude][subdir] = contrib
projects[context_admin_exclude][version] = 1.x-dev
