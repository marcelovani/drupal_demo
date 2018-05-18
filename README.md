# Drupal demo
Demo site for my contrib modules

### Prerequisites

- Git
- Drush 7 `sudo git clone --branch 7.x-5.x http://git.drupal.org/project/drush.git /usr/local/drush`
- PHP <= 5.6

## Building
- Clone the repo into a folder
- Build the site and run composer install/update
`cd drupal_demo; composer install;`

** PHP memory errors?
`php -d "memory_limit=-1" /usr/local/bin/composer update`

## Install a fresh site
`cd web/core`
`drush si -y standard --site-name="Drupal Demo" --db-url=sqlite://sites/default/files/.ht.sqlite --account-name=admin --account-pass=demo`
`drush en -y drupal_demo`

## Running the site
`cd web/core; drush rs 8008 > /dev/null 2>/dev/null &`

## Running Simpletests
`cd web/core; php scripts/run-tests.sh --color --concurrency "31" --url http://127.0.0.1:8008 --verbose --directory sites/default/modules/contrib`

## Running BDD tests
`cd tests`
`./behat`

## Generating artifacts
`sudo /vagrant/repos/scripts/misc/generate_artifacts.sh drupal_demo`

## Deploying artifacts
- Copy to the server
`scp /tmp/artifacts_drupal_demo_20170425.tar.gz alophysi@drupal_demo.co.uk:~/tmp`

- Now ssh into the server
`ssh alophysi@drupal_demo.co.uk`

- Move the zip file and unzip
`mkdir deploy`
`mv /tmp/artifacts_drupal_demo_20170425.tar.gz ./deploy`
`cd deploy`
`tar -xvzf artifacts_drupal_demo_20170425.tar.gz`
