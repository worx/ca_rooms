<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_rooms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_rooms_imagecache_default_presets() {
  $items = array(
    'ca_rooms_r_scale_200w' => array(
      'presetname' => 'ca_rooms_r_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_rooms_r_scale_500w_400h' => array(
      'presetname' => 'ca_rooms_r_scale_500w_400h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '500',
            'height' => '400',
          ),
        ),
      ),
    ),
    'ca_rooms_rt_scale_200w' => array(
      'presetname' => 'ca_rooms_rt_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_rooms_node_info() {
  $items = array(
    'ca_room' => array(
      'name' => t('Room'),
      'module' => 'features',
      'description' => t('This content type is used to add a <em>\'Room\'</em> to the <em>\'Rooms\'</em> section of the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'ca_room_type' => array(
      'name' => t('Room Type'),
      'module' => 'features',
      'description' => t('This content type is used to add a <em>\'Room Type\'</em> that will later be used to create a relationship between <em>\'Room Type\'</em> and <em>\'Room\'</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_rooms_views_api() {
  return array(
    'api' => '2',
  );
}
