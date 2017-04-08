# Drupal demo
Demo site for my contrib modules

### Prerequisites

- Git
- Drush
- PHP <= 5.6

## Building
This installation will install the site on a directory called drupal_demo.

- Copy and paste this into your shell to install everything:
`curl -L -s https://goo.gl/1yuiCj | bash`

- Go inside the distro folder
`cd drupal_demo`

- Build the site
`sh scripts/build.sh [destination dir]`
The destination dir defaults to ./web

## Unassisted build
`curl -L https://goo.gl/6WdRoF | bash`
This script will automatically build the site on `drupal_demo` folder

## Install the site
`cd [destination dir]`
`sh ../scripts/install.sh`
ps: If you are using DevDesktop, it will configure the settings.php for you when you add a new site.
All you have to do is run `drush si -y drupal_demo --site-name="Drupal demo" --account-name=admin --account-pass=demo`

## Running tests

`php scripts/run-tests.sh --color --concurrency "31" --directory profiles/modules/contrib --url "http://localhost" --verbose`
