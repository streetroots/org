<?php
/**
 * @file
 * sr_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function sr_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-c9035927';
  $box->plugin_key = 'simple';
  $box->title = 'Keep Us Strong';
  $box->description = 'Keep Us Strong';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
  );
  $export['box-c9035927'] = $box;

  return $export;
}
