#!/bin/bash
set +x

echo
echo "[Info] Bootstrap is cloning the repo"

git clone --recursive --branch master https://github.com/marcelovani/drupal_demo.git drupal_demo

echo "[Info] Bootstrap has finished installation."
echo
echo To install Distro run 
echo cd drupal_demo
echo ./install.sh [destination]
