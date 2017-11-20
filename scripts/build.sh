#!/bin/bash
set +x

INSTALL_DIR=$1
[ -z $INSTALL_DIR ] && INSTALL_DIR=web

function f_install_drush() {
  if [ ! -d "/usr/local/drush" ]; then
    echo "[INFO] Installing Drush"
    sudo git clone --branch 7.x-5.x http://git.drupal.org/project/drush.git /usr/local/drush
    sudo /usr/local/drush/drush --version
  fi
}

function f_build_site() {
  echo "[INFO] Building Drupal"
  drush make --working-copy --prepare-install build-drupal_demo.make ${INSTALL_DIR}
  # Create symlinks used for testing
  cd ${INSTALL_DIR}/sites/all/
  rm -rf modules
  ln -s ../../profiles/drupal_demo/modules
  rm -rf themes
  ln -s ../../profiles/drupal_demo/themes
  rm -rf libraries
  ln -s ../../profiles/drupal_demo/libraries
  cd ../../../
}

function f_install_site() {
  cd ${INSTALL_DIR}
  pwd
  sh ../scripts/install.sh
  cd ../
}

function f_serve() {
  echo "[INFO] Serving Drupal"
  pwd; cd ${INSTALL_DIR}; php -S 127.0.0.1:8008
}

f_install_drush
f_build_site
f_install_site
f_serve

echo Done
