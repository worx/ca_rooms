<?php

/*
 * Define the function that will create the admin settings page.
 */
function ca_rooms_admin_settings_form() {
  $form = array();

  $form['rooms_list'] = array(
    '#type' => 'select',
    '#title' => t('Room\'s List Template'),
    '#description' => t('This setting will change the look and feel that is located at http://www.example.com/rooms.'),
    '#options' => array(
      'ca_rooms_list_template_one' => t('Template One'),
      'ca_rooms_list_template_two' => t('Template Two'),
      'ca_rooms_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_rooms_list_template', 'ca_rooms_list_template_one'),
    '#required' => TRUE,
  );
  $form['rooms_node_room_type'] = array(
    '#type' => 'select',
    '#title' => t('Room Type\'s Node Template'),
    '#description' => t('This setting will change the look and feel of the "Room Type" Node.'),
    '#options' => array(
      'ca_rooms_node_room_type_template_one' => t('Template One'),
      'ca_rooms_node_room_type_template_two' => t('Template Two'),
      'ca_rooms_node_room_type_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_rooms_node_room_type_template', 'ca_rooms_node_room_type_template_one'),
    '#required' => TRUE,
  );
  $form['rooms_node_room'] = array(
    '#type' => 'select',
    '#title' => t('Room\'s Node Template'),
    '#description' => t('This setting will change the look and feel of the "Room" Node.'),
    '#options' => array(
      'ca_rooms_node_room_template_one' => t('Template One'),
      'ca_rooms_node_room_template_two' => t('Template Two'),
      'ca_rooms_node_room_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_rooms_node_room_template', 'ca_rooms_node_room_template_one'),
    '#required' => TRUE,
  );
  $form['rooms_views_subroom_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Sub Room Type Views Title'),
    '#description' => t('This will change the title to the Sub Room Type view that shows on the "Room Type" Nodes.'),
    '#default_value' => variable_get('ca_rooms_views_display_title_subroom_type', 'Sub Room Types'),
  );
  $form['rooms_views_roomlist_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Room List Views Title'),
    '#description' => t('This will change the title to the Rooms view that shows on the "Room Type" Nodes.'),
    '#default_value' => variable_get('ca_rooms_views_display_title_room_list', 'Rooms'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_rooms_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the submit function that will save the admin settings page.
 */
function ca_rooms_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_rooms_list_template', $form_state['values']['rooms_list']);
  variable_set('ca_rooms_node_room_type_template', $form_state['values']['rooms_node_room_type']);
  variable_set('ca_rooms_node_room_template', $form_state['values']['rooms_node_room']);
  variable_set('ca_rooms_views_display_title_subroom_type', $form_state['values']['rooms_views_subroom_title']);
  variable_set('ca_rooms_views_display_title_room_list', $form_state['values']['rooms_views_roomlist_title']);
  drupal_set_message('Configuration has been saved.');
}
