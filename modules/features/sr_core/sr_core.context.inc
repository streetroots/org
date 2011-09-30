<?php
/**
 * @file
 * sr_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sr_core_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Home';
  $context->description = 'homepage';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'rotating_banner-1' => array(
          'module' => 'rotating_banner',
          'delta' => 1,
          'region' => 'content',
          'weight' => '-10',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-6b8b5c3b63dc13e1c65f06ceced8ba44' => array(
          'module' => 'views',
          'delta' => '6b8b5c3b63dc13e1c65f06ceced8ba44',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home');
  t('homepage');
  $export['Home'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context';
  $context->tag = 'Streetroots';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context');
  t('Streetroots');
  $export['sitewide'] = $context;

  return $export;
}
