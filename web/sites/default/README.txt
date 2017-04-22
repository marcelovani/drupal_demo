Instructions

Clone the scripts
$ git clone https://marcellovani@bitbucket.org/marcellovani/bash-scripts.git ~/scripts

Installing drush, changing the prompt
$ ~/scripts/drupal/install_drush.sh
$ cp policy.drush.inc ~/.drush
$ cp sites.aliases.drushrc.php ~/.drush

Bash profile
$ sudo cp ~/.bash_profile ~/.bash_profile.bak
$ cat ~/scripts/common/bash_profile/alias_ls.txt >> ~/.bash_profile
$ cat ~/scripts/common/bash_profile/colors.txt >> ~/.bash_profile
$ cat ~/scripts/common/bash_profile/prompt.txt >> ~/.bash_profile
$ cat ~/scripts/drupal/bash_profile/drush.txt >> ~/.bash_profile
$ cat bash_profile.txt >> ~/.bash_profile
source ~/.bash_profile

Building the site
$ drush make --no-core --no-gitinfofile --contrib-destination=. -y site.make

HTACCESS rules
copy the contents of htaccess.txt inside the .htaccess file on the Drupal core root

Settings.php
Create a symlink to live/dev
$ ln -s live.settings.php settings.php

Dumping DB live -> dev
$ drush sql-sync @aloclinic-live @aloclinic-dev


