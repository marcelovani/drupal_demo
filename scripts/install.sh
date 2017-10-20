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
  drush en -y simpletest
  drush dis -y toolbar
  drush dis -y overlay
}

f_install_site

echo Done
