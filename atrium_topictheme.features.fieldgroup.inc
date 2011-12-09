<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function atrium_topictheme_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_images
  $groups['topictheme-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'topictheme',
    'group_name' => 'group_images',
    'label' => 'Add Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_images',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Images');

  return $groups;
}
