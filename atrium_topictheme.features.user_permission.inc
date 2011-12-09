<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_topictheme_user_default_permissions() {
  $permissions = array();

  // Exported permission: create topictheme content
  $permissions['create topictheme content'] = array(
    'name' => 'create topictheme content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own topictheme content
  $permissions['delete own topictheme content'] = array(
    'name' => 'delete own topictheme content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own topictheme content
  $permissions['edit own topictheme content'] = array(
    'name' => 'edit own topictheme content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
