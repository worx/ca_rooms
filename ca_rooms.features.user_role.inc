<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_rooms_user_default_roles() {
  $roles = array();

  // Exported role: room admin
  $roles['room admin'] = array(
    'name' => 'room admin',
  );

  return $roles;
}
