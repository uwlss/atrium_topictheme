<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_topictheme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function atrium_topictheme_imagecache_default_presets() {
  $items = array(
    'cs_gallery' => array(
      'presetname' => 'cs_gallery',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '200',
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
function atrium_topictheme_node_info() {
  $items = array(
    'topictheme' => array(
      'name' => t('Topics and Themes'),
      'module' => 'features',
      'description' => t('List and organize the major topics and themes of the course.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_topictheme_views_api() {
  return array(
    'api' => '2',
  );
}
