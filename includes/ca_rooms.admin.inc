<?php

/*
 * Define the function that will create the admin settings page.
 */
function ca_rooms_admin_settings_form() {
  $form = array();

  $form['rooms_list'] = array(
    '#type' => 'select',
    '#title' => t('Room\'s List Template'),
    '#options' => array(
      'ca_rooms_list_template_one' => t('Template One'),
      'ca_rooms_list_template_two' => t('Template Two'),
      'ca_rooms_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_rooms_list_template', 'ca_rooms_list_template_one'),
    '#required' => TRUE,
  );
  $form['rooms_node'] = array(
    '#type' => 'select',
    '#title' => t('Room\'s Node Template'),
    '#options' => array(
      'ca_rooms_node_template_one' => t('Template One'),
      'ca_rooms_node_template_two' => t('Template Two'),
      'ca_rooms_node_template_three' => t('Template Three'),
    ),
  '#default_value' => variable_get('ca_rooms_node_template', 'ca_rooms_node_template_one'),
  '#required' => TRUE,
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
  variable_set('ca_rooms_node_template', $form_state['values']['rooms_node']);
  drupal_set_message('Configuration has been saved.');
}
