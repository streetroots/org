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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = 'About page';
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
        'rotating_banner-6' => array(
          'module' => 'rotating_banner',
          'delta' => '6',
          'region' => 'content',
          'weight' => '-41',
        ),
        'boxes-aboutourwork' => array(
          'module' => 'boxes',
          'delta' => 'aboutourwork',
          'region' => 'content',
          'weight' => '-40',
        ),
        'boxes-mission' => array(
          'module' => 'boxes',
          'delta' => 'mission',
          'region' => 'content',
          'weight' => '-39',
        ),
        'boxes-our_people' => array(
          'module' => 'boxes',
          'delta' => 'our_people',
          'region' => 'content',
          'weight' => '-38',
        ),
        'boxes-accountability' => array(
          'module' => 'boxes',
          'delta' => 'accountability',
          'region' => 'content',
          'weight' => '-37',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About page');
  t('about');
  $export['about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advertise';
  $context->description = 'advertising page - adds advertising inquiry link';
  $context->tag = 'advertise';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support/advertise' => 'support/advertise',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ad_sponsorship_inquiry_link' => array(
          'module' => 'boxes',
          'delta' => 'ad_sponsorship_inquiry_link',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('advertise');
  t('advertising page - adds advertising inquiry link');
  $export['advertise'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advocacy';
  $context->description = 'Advocacy Page - empty (no context reactions) but placeholder';
  $context->tag = 'advocacy';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/advocacy' => 'about/advocacy',
        'about/work/advocacy' => 'about/work/advocacy',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advocacy Page - empty (no context reactions) but placeholder');
  t('advocacy');
  $export['advocacy'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = 'contact page - sidebar links for contacting the organization';
  $context->tag = 'contact page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-contact-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-contact-menu',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('contact page');
  t('contact page - sidebar links for contacting the organization');
  $export['contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'guide';
  $context->description = 'resource guide';
  $context->tag = 'resourceguide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/resourceguide' => 'about/resourceguide',
        'about/resourceguide/*' => 'about/resourceguide/*',
        'about/work/resourceguide' => 'about/work/resourceguide',
        'about/work/resourceguide/*' => 'about/work/resourceguide/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-resource_guide_link' => array(
          'module' => 'boxes',
          'delta' => 'resource_guide_link',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-5680bc3d9b7c54f5cd332ecbf62b6f4e' => array(
          'module' => 'views',
          'delta' => '5680bc3d9b7c54f5cd332ecbf62b6f4e',
          'region' => 'content',
          'weight' => '4',
        ),
        'menu-menu-resource-guide' => array(
          'module' => 'menu',
          'delta' => 'menu-resource-guide',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('resource guide');
  t('resourceguide');
  $export['guide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'homepage - front page of site';
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
        'boxes-mission' => array(
          'module' => 'boxes',
          'delta' => 'mission',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'boxes-whatwedo' => array(
          'module' => 'boxes',
          'delta' => 'whatwedo',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-latest_news-block' => array(
          'module' => 'views',
          'delta' => 'latest_news-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-6b8b5c3b63dc13e1c65f06ceced8ba44' => array(
          'module' => 'views',
          'delta' => '6b8b5c3b63dc13e1c65f06ceced8ba44',
          'region' => 'content',
          'weight' => '-7',
        ),
        'boxes-donate_connect' => array(
          'module' => 'boxes',
          'delta' => 'donate_connect',
          'region' => 'sidebar_second',
          'weight' => '-38',
        ),
        'views-13b59a4e67ae2906e8bb9d598dff69df' => array(
          'module' => 'views',
          'delta' => '13b59a4e67ae2906e8bb9d598dff69df',
          'region' => 'sidebar_second',
          'weight' => '-37',
        ),
        'views-c47eaa322b00e97715411cb2364910ee' => array(
          'module' => 'views',
          'delta' => 'c47eaa322b00e97715411cb2364910ee',
          'region' => 'sidebar_second',
          'weight' => '-36',
        ),
        'boxes-footer_credits' => array(
          'module' => 'boxes',
          'delta' => 'footer_credits',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-footer_data' => array(
          'module' => 'boxes',
          'delta' => 'footer_data',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home');
  t('homepage - front page of site');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newspaper';
  $context->description = 'Newspaper - active ';
  $context->tag = 'newspaper';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/newspaper' => 'about/newspaper',
        'about/newspaper/*' => 'about/newspaper/*',
        'about/work/newspaper' => 'about/work/newspaper',
        'about/work/newspaper/*' => 'about/work/newspaper/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-news_site_link' => array(
          'module' => 'boxes',
          'delta' => 'news_site_link',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-latest_news-block' => array(
          'module' => 'views',
          'delta' => 'latest_news-block',
          'region' => 'content',
          'weight' => '2',
        ),
        'menu-menu-newsmenu' => array(
          'module' => 'menu',
          'delta' => 'menu-newsmenu',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Newspaper - active ');
  t('newspaper');
  $export['newspaper'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide blocks - these appear on every page except the home page';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~/admin/*' => '~/admin/*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-mission' => array(
          'module' => 'boxes',
          'delta' => 'mission',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-cbd20254f5b49a9e534199b96f449616' => array(
          'module' => 'views',
          'delta' => 'cbd20254f5b49a9e534199b96f449616',
          'region' => 'content',
          'weight' => '9',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'sidebar_second',
          'weight' => '-38',
        ),
        'boxes-donate_connect' => array(
          'module' => 'boxes',
          'delta' => 'donate_connect',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'boxes-ourwork_menu' => array(
          'module' => 'boxes',
          'delta' => 'ourwork_menu',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'boxes-footer_credits' => array(
          'module' => 'boxes',
          'delta' => 'footer_credits',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-footer_data' => array(
          'module' => 'boxes',
          'delta' => 'footer_data',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide blocks - these appear on every page except the home page');
  t('sitewide');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsor';
  $context->description = 'become a sponsor - information page about sponsoring';
  $context->tag = 'sponsor';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support/sponsor' => 'support/sponsor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ad_sponsorship_inquiry_link' => array(
          'module' => 'boxes',
          'delta' => 'ad_sponsorship_inquiry_link',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-see_our_friends_and_supporters' => array(
          'module' => 'boxes',
          'delta' => 'see_our_friends_and_supporters',
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
  t('become a sponsor - information page about sponsoring');
  t('sponsor');
  $export['sponsor'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors';
  $context->description = 'sponsors page - list of sponsors by level and community partners';
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
        'views-59680aa9e208549fe20d219cd09513ec' => array(
          'module' => 'views',
          'delta' => '59680aa9e208549fe20d219cd09513ec',
          'region' => 'content',
          'weight' => '-38',
        ),
        'views-1b1fbd4d1b1528c39fbc243b6194d267' => array(
          'module' => 'views',
          'delta' => '1b1fbd4d1b1528c39fbc243b6194d267',
          'region' => 'content',
          'weight' => '-38',
        ),
        'views-8f2b59290f2b9af8d04e72021d5e240d' => array(
          'module' => 'views',
          'delta' => '8f2b59290f2b9af8d04e72021d5e240d',
          'region' => 'content',
          'weight' => '-38',
        ),
        'views-ffbc48b22349ac130a42162c0868f543' => array(
          'module' => 'views',
          'delta' => 'ffbc48b22349ac130a42162c0868f543',
          'region' => 'content',
          'weight' => '-38',
        ),
        'views-63b4d486f75c67e3aa42f2072bc15339' => array(
          'module' => 'views',
          'delta' => '63b4d486f75c67e3aa42f2072bc15339',
          'region' => 'content',
          'weight' => '-38',
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
  t('sponsors');
  t('sponsors page - list of sponsors by level and community partners');
  $export['sponsors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'support_global';
  $context->description = 'support global blocks - links and menus will show up on all support pages';
  $context->tag = 'support_global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support' => 'support',
        'support/*' => 'support/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-see_our_friends_and_supporters' => array(
          'module' => 'boxes',
          'delta' => 'see_our_friends_and_supporters',
          'region' => 'content',
          'weight' => '-9',
        ),
        'menu-menu-support-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-support-menu',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('support global blocks - links and menus will show up on all support pages');
  t('support_global');
  $export['support_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vendor';
  $context->description = 'Vendor Program Page - about the Vendor program';
  $context->tag = 'vendor';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/vendor' => 'about/vendor',
        'about/vendor/*' => 'about/vendor/*',
        'about/work/vendor' => 'about/work/vendor',
        'about/work/vendor/*' => 'about/work/vendor/*',
        'about/people/vendors' => 'about/people/vendors',
        'about/people/vendors/*' => 'about/people/vendors/*',
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
          'weight' => '1',
        ),
        'views-vendor_photo_gallery-block' => array(
          'module' => 'views',
          'delta' => 'vendor_photo_gallery-block',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Vendor Program Page - about the Vendor program');
  t('vendor');
  $export['vendor'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vendor_global';
  $context->description = 'vendor global context (sidebar menu) - adds vendor program links';
  $context->tag = 'vendor global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/work/vendor' => 'about/work/vendor',
        'about/work/vendor/*' => 'about/work/vendor/*',
        'about/people/vendors' => 'about/people/vendors',
        'about/people/vendors/*' => 'about/people/vendors/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-vendor-program' => array(
          'module' => 'menu',
          'delta' => 'menu-vendor-program',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('vendor global');
  t('vendor global context (sidebar menu) - adds vendor program links');
  $export['vendor_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'volunteer';
  $context->description = 'volunteer - volunteer information, vol job descriptions, vol application';
  $context->tag = 'volunteer';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support/volunteer' => 'support/volunteer',
        'volunteer' => 'volunteer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-volunteer_opportunities-block_1' => array(
          'module' => 'views',
          'delta' => 'volunteer_opportunities-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
        'boxes-volunteer_app' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_app',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('volunteer');
  t('volunteer - volunteer information, vol job descriptions, vol application');
  $export['volunteer'] = $context;

  return $export;
}
