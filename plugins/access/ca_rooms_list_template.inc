<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("CA: Room list templates"),
  'description' => t('Control access by Room list template settings.'),
  'callback' => 'ca_rooms_list_template_access_check',
  'settings form' => 'ca_rooms_list_template_access_settings',
  'settings form submit' => 'ca_rooms_list_template_access_settings_submit',
  'summary' => 'ca_rooms_list_template_access_summary',
);

/**
 * Settings form for the 'CA: Room list templates' access plugin ca_rooms_list_template_access_settings.
 */
function ca_rooms_list_template_access_settings(&$form, &$form_state, $conf) {
  $form['settings']['ca_rooms_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Room\'s List Template'),
    '#options' => array(
      'ca_rooms_list_template_one' => t('Template One'),
      'ca_rooms_list_template_two' => t('Template Two'),
      'ca_rooms_list_template_three' => t('Template Three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_rooms_list_template'],
  );
  return $form;
}

/**
 * Compress the node_types allowed to the minimum.
 */
function ca_rooms_list_template_access_settings_submit(&$form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_rooms_list_template_access_check($conf, $context) {
  return $conf['ca_rooms_list_template'] == variable_get('ca_rooms_list_template', 'ca_rooms_list_template_one');
}

/**
 * Provide a summary description based upon the checked node_types.
 */
function ca_rooms_list_template_access_summary($conf, $context) {
  if ($conf['ca_rooms_list_template'] == 'ca_rooms_list_template_one') {
    $template = t('Template One');
  }
  elseif ($conf['ca_rooms_list_template'] == 'ca_rooms_list_template_two') {
    $template = t('Template Two');
  }
  else {
    $template = t('Template Three');
  }
  return t('Display template is set to: ' . $template);
}
           
