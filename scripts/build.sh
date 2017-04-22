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
  echo "[INFO] Building Drupal:"
  /usr/local/drush/drush make --working-copy --prepare-install site.make ${INSTALL_DIR}
  # Create symlinks used for testing
  cd ${INSTALL_DIR}/sites/all/modules
  ln -s ../../../profiles/drupal_demo/modules/contrib
  cd ../themes
  ln -s ../../../profiles/drupal_demo/themes/contrib
}

function f_install_site() {
  cd ${INSTALL_DIR}/sites/default
  echo "[INFO] Drupal installed. Make sure you have configured you vhost to point to the installation dir and run:"
  echo "cd ${INSTALL_DIR}"
  echo "../scripts/install.sh"
}

f_install_drush
f_build_site
f_install_site

echo Done
