#!/bin/bash
set +x

function f_install_site() {
  echo "[INFO] Installing Drupal"
  drush si -y standard \
  --db-url=sqlite://sites/default/files/.ht.sqlite \
  --clean-url \
  --site-name="Drupal 7 Demo" \
  --account-mail=ex@ample.com \
  --account-name=admin \
  --account-pass=demo \
  --sites-subdir=default

  # Enable modules
  drush en -y simpletest, sharerich, captcha_keypad, blocks_mass_cache, \
  cache_purger, context_admin_exclude, admin_menu, admin_devel, \
  admin_menu_toolbar, module_filter, metatag, context, ctools, \
  entity, features, googleanalytics, nodequeue, pathauto, strongarm, \
  token, views_content, views_ui, wysiwyg, xmlsitemap, libraries

  drush dis -y toolbar, overlay
}

f_install_site

echo Done
