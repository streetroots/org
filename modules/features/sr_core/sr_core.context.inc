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
          'weight' => '-21',
        ),
        'boxes-whatwedo' => array(
          'module' => 'boxes',
          'delta' => 'whatwedo',
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
        'boxes-donate_connect' => array(
          'module' => 'boxes',
          'delta' => 'donate_connect',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-c47eaa322b00e97715411cb2364910ee' => array(
          'module' => 'views',
          'delta' => 'c47eaa322b00e97715411cb2364910ee',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-13b59a4e67ae2906e8bb9d598dff69df' => array(
          'module' => 'views',
          'delta' => '13b59a4e67ae2906e8bb9d598dff69df',
          'region' => 'sidebar_second',
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
  $context->name = 'News';
  $context->description = 'News';
  $context->tag = 'news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/53' => 'node/53',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'aggregator-feed-2' => array(
          'module' => 'aggregator',
          'delta' => 'feed-2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'aggregator-feed-3' => array(
          'module' => 'aggregator',
          'delta' => 'feed-3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('news');
  $export['News'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Sponsors';
  $context->description = 'sponsor page';
  $context->tag = 'sponsors';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support/sponsors' => 'support/sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-63b4d486f75c67e3aa42f2072bc15339' => array(
          'module' => 'views',
          'delta' => '63b4d486f75c67e3aa42f2072bc15339',
          'region' => 'content',
          'weight' => '-21',
        ),
        'views-59680aa9e208549fe20d219cd09513ec' => array(
          'module' => 'views',
          'delta' => '59680aa9e208549fe20d219cd09513ec',
          'region' => 'content',
          'weight' => '-15',
        ),
        'views-1b1fbd4d1b1528c39fbc243b6194d267' => array(
          'module' => 'views',
          'delta' => '1b1fbd4d1b1528c39fbc243b6194d267',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-8f2b59290f2b9af8d04e72021d5e240d' => array(
          'module' => 'views',
          'delta' => '8f2b59290f2b9af8d04e72021d5e240d',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-ffbc48b22349ac130a42162c0868f543' => array(
          'module' => 'views',
          'delta' => 'ffbc48b22349ac130a42162c0868f543',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-b7fe2df54de25de320fd346d47009250' => array(
          'module' => 'views',
          'delta' => 'b7fe2df54de25de320fd346d47009250',
          'region' => 'content',
          'weight' => '-1',
        ),
        'views-community_partners-block_1' => array(
          'module' => 'views',
          'delta' => 'community_partners-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sponsor page');
  t('sponsors');
  $export['Sponsors'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Support';
  $context->description = 'Support page';
  $context->tag = 'support';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support' => 'support',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonials_view-block_1' => array(
          'module' => 'views',
          'delta' => 'testimonials_view-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-see_our_friends_and_supporters' => array(
          'module' => 'boxes',
          'delta' => 'see_our_friends_and_supporters',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Support page');
  t('support');
  $export['Support'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Vendor Program';
  $context->description = 'Vendor Program Page';
  $context->tag = 'vendor program';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/vendor' => 'about/vendor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-vendor_profile-block' => array(
          'module' => 'views',
          'delta' => 'vendor_profile-block',
          'region' => 'content',
          'weight' => '-32',
        ),
        'views-vendor_photo_gallery-block' => array(
          'module' => 'views',
          'delta' => 'vendor_photo_gallery-block',
          'region' => 'content',
          'weight' => '-31',
        ),
        'views-testimonials_view-block_1' => array(
          'module' => 'views',
          'delta' => 'testimonials_view-block_1',
          'region' => 'content',
          'weight' => '-30',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Vendor Program Page');
  t('vendor program');
  $export['Vendor Program'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Volunteer';
  $context->description = 'volunteer';
  $context->tag = 'volunteer';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support/volunteer' => 'support/volunteer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'content',
          'weight' => '-32',
        ),
        'views-volunteer_opportunities-block_1' => array(
          'module' => 'views',
          'delta' => 'volunteer_opportunities-block_1',
          'region' => 'content',
          'weight' => '-31',
        ),
        'views-testimonials_view-block_1' => array(
          'module' => 'views',
          'delta' => 'testimonials_view-block_1',
          'region' => 'content',
          'weight' => '-30',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('volunteer');
  $export['Volunteer'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = 'About';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-our_people' => array(
          'module' => 'boxes',
          'delta' => 'our_people',
          'region' => 'triptych_first',
          'weight' => '-10',
        ),
        'boxes-aboutourwork' => array(
          'module' => 'boxes',
          'delta' => 'aboutourwork',
          'region' => 'triptych_first',
          'weight' => '-9',
        ),
        'boxes-mission' => array(
          'module' => 'boxes',
          'delta' => 'mission',
          'region' => 'triptych_middle',
          'weight' => '-10',
        ),
        'boxes-accountability' => array(
          'module' => 'boxes',
          'delta' => 'accountability',
          'region' => 'triptych_middle',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('about');
  $export['about'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advocacy';
  $context->description = 'Advocacy Page';
  $context->tag = 'advocacy';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/advocacy' => 'about/advocacy',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-advocacy-block_1' => array(
          'module' => 'views',
          'delta' => 'advocacy-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advocacy Page');
  t('advocacy');
  $export['advocacy'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_Sponsors';
  $context->description = 'sponsor page';
  $context->tag = 'sponsors';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/31' => 'node/31',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-63b4d486f75c67e3aa42f2072bc15339' => array(
          'module' => 'views',
          'delta' => '63b4d486f75c67e3aa42f2072bc15339',
          'region' => 'content',
          'weight' => '-19',
        ),
        'views-4e583529c68c466e41c70d366fffe033' => array(
          'module' => 'views',
          'delta' => '4e583529c68c466e41c70d366fffe033',
          'region' => 'content',
          'weight' => '-18',
        ),
        'views-community_partners-block_1' => array(
          'module' => 'views',
          'delta' => 'community_partners-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sponsor page');
  t('sponsors');
  $export['clone_of_Sponsors'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide blocks';
  $context->tag = 'sitewide';
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
        'boxes-donate_connect' => array(
          'module' => 'boxes',
          'delta' => 'donate_connect',
          'region' => 'sidebar_second',
          'weight' => '-26',
        ),
        'boxes-ourwork_menu' => array(
          'module' => 'boxes',
          'delta' => 'ourwork_menu',
          'region' => 'sidebar_second',
          'weight' => '-25',
        ),
        'boxes-footer_data' => array(
          'module' => 'boxes',
          'delta' => 'footer_data',
          'region' => 'footer_first',
          'weight' => '-25',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide blocks');
  t('sitewide');
  $export['sitewide'] = $context;

  return $export;
}
