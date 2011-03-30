<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ca_rooms_taxonomy_default_vocabularies() {
  return array(
    'ca_rooms_room_amenities' => array(
      'name' => 'Room Amenities',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_ca_rooms_room_amenities',
      'weight' => '0',
      'nodes' => array(
        'ca_room' => 'ca_room',
      ),
    ),
  );
}
