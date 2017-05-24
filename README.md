# Drupal demo
Demo site for my contrib modules

### Prerequisites

- Git
- Drush
- PHP <= 5.6

## Building
- Clone the repo into a folder
- Build the site and run composer install/update
`cd drupal_demo; composer install;`

## Install a fresh site
`cd web/core`
`drush si -y standard --site-name="Drupal Demo" --account-name=admin --account-pass=demo`
`drush en -y drupal_demo`

## Generating artifacts
`sudo /vagrant/repos/scripts/misc/generate_artifacts.sh drupal_demo`

## Deploying artifacts
Copy to the server
`scp /tmp/artifacts_drupal_demo_20170425.tar.gz alophysi@drupal_demo.co.uk:~/tmp`
Now ssh into the server
`ssh alophysi@drupal_demo.co.uk`
Move the zip file and unzip
`mkdir deploy`
`mv /tmp/artifacts_drupal_demo_20170425.tar.gz ./deploy`
`cd deploy`
`tar -xvzf artifacts_drupal_demo_20170425.tar.gz`
