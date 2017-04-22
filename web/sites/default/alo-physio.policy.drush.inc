<?php

/**
 * Implement of drush_hook_COMMAND_validate().
 *
 * Prevent catastrophic braino. Note that this file has to be local to the machine
 * that initiates sql-sync command.
 */
function drush_policy_sql_sync_validate($source = NULL, $destination = NULL) {
  if (stripos($destination, 'live') !== FALSE) {
    return drush_set_error(dt('As per policy.drush.inc, you never overwrite the production database...probably time for bed?'));
  }
}

