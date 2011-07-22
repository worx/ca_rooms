<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_rooms_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_room';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'menu' => '-1',
    'taxonomy' => '-3',
    'path' => '4',
  );

  $export['content_extra_weights_ca_room'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_room_type';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-2',
    'path' => '3',
  );

  $export['content_extra_weights_ca_room_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_room';
  $strongarm->value = 'form-0b9f3489bed6cf6383e9fcded2ee5909';

  $export['form_build_id_ca_room'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_room_type';
  $strongarm->value = 'form-be801b9ad83a91f5275dfdcb8b6f8350';

  $export['form_build_id_ca_room_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_rooms';
  $strongarm->value = 'form-9006d36bdf87d75de2f351f62bffd86e';

  $export['form_build_id_ca_rooms'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_room';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_room'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_room_type';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_room_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_rooms';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_rooms'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled_ca_rooms';
  $strongarm->value = FALSE;

  $export['page_manager_node_view_disabled_ca_rooms'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_room_pattern';
  $strongarm->value = '[ca-rooms-parent-node-reference-path]/[title-raw]';

  $export['pathauto_node_ca_room_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_room_type_pattern';
  $strongarm->value = '[ca-rooms-parent-node-reference-path]/[title-raw]';

  $export['pathauto_node_ca_room_type_pattern'] = $strongarm;
  return $export;
}
