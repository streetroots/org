<?php
/**
 * @file
 * sr_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sr_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-advocacy-menu.
  $menus['menu-advocacy-menu'] = array(
    'menu_name' => 'menu-advocacy-menu',
    'title' => 'Advocacy Links',
    'description' => 'Menu for Advocacy Page',
  );
  // Exported menu: menu-contact-menu.
  $menus['menu-contact-menu'] = array(
    'menu_name' => 'menu-contact-menu',
    'title' => 'Contact Links',
    'description' => 'Most-used contact links',
  );
  // Exported menu: menu-newsmenu.
  $menus['menu-newsmenu'] = array(
    'menu_name' => 'menu-newsmenu',
    'title' => 'Newspaper Links',
    'description' => 'Menu for newspaper page',
  );
  // Exported menu: menu-newspaper.
  $menus['menu-newspaper'] = array(
    'menu_name' => 'menu-newspaper',
    'title' => 'Newspaper',
    'description' => 'Newspaper menu block',
  );
  // Exported menu: menu-our-work.
  $menus['menu-our-work'] = array(
    'menu_name' => 'menu-our-work',
    'title' => 'Our Work',
    'description' => 'Our Work sidebar menu',
  );
  // Exported menu: menu-resource-guide.
  $menus['menu-resource-guide'] = array(
    'menu_name' => 'menu-resource-guide',
    'title' => 'Resource Guide Links',
    'description' => 'Resource Guide quick links',
  );
  // Exported menu: menu-support-menu.
  $menus['menu-support-menu'] = array(
    'menu_name' => 'menu-support-menu',
    'title' => 'Ways to Help',
    'description' => 'Menu for Support Page',
  );
  // Exported menu: menu-vendor-program.
  $menus['menu-vendor-program'] = array(
    'menu_name' => 'menu-vendor-program',
    'title' => 'Vendor Program Links',
    'description' => 'Vendor Program Links',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Advocacy Links');
  t('Contact Links');
  t('Features');
  t('Main menu');
  t('Menu for Advocacy Page');
  t('Menu for Support Page');
  t('Menu for newspaper page');
  t('Menu items for any enabled features.');
  t('Most-used contact links');
  t('Navigation');
  t('Newspaper');
  t('Newspaper Links');
  t('Newspaper menu block');
  t('Our Work');
  t('Our Work sidebar menu');
  t('Resource Guide Links');
  t('Resource Guide quick links');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('Vendor Program Links');
  t('Ways to Help');


  return $menus;
}
