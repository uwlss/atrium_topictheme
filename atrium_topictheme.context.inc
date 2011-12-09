<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_topictheme_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'topictheme_listing';
  $context->description = '';
  $context->tag = 'Topics and Themes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'topictheme' => 'topictheme',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'topictheme_listing' => 'topictheme_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-topictheme_references-block_1' => array(
          'module' => 'views',
          'delta' => 'topictheme_references-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'topictheme',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Topics and Themes');
  $export['topictheme_listing'] = $context;

  return $export;
}
