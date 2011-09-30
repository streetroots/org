<?php
/**
 * @file
 * sr_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sr_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sr_core_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function sr_core_flag_default_flags() {
  $flags = array();
  // Exported flag: "Active Advocacy Campaign".
  $flags['active_campaign'] = array(
    'content_type' => 'node',
    'title' => 'Active Advocacy Campaign',
    'global' => '0',
    'types' => array(
      0 => 'advocacy_campaign',
    ),
    'flag_short' => 'Make this an active Advocacy Campaign',
    'flag_long' => 'Clicking here will make this Advocacy Campaign active and show up on the Advocacy page',
    'flag_message' => 'This is an active Advocacy Campaign',
    'unflag_short' => 'Remove this from active Advocacy Campaigns',
    'unflag_long' => 'Clicking here will remove this Advocacy Campaign from active status',
    'unflag_message' => 'This is not an active Advocacy Campaign. It can still be accessed through Advocacy campaign archives.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'sr_core',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Homepage sponsor".
  $flags['homepage_sponsor'] = array(
    'content_type' => 'node',
    'title' => 'Homepage sponsor',
    'global' => '0',
    'types' => array(
      0 => 'sponsor',
    ),
    'flag_short' => 'Put this sponsor on the home page sponsor block',
    'flag_long' => 'Clicking here will place this sponsor on the home page',
    'flag_message' => 'This sponsor is currently displayed on the home page sponsor block',
    'unflag_short' => 'Click here to remove this sponsor from the home page sponsor block',
    'unflag_long' => 'Clicking here will remove this sponsor from the home page',
    'unflag_message' => 'This sponsor is not displayed on the home page sponsor block',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to add this sponsor to the home page?',
    'unflag_confirmation' => 'Are you sure you want to remove this sponsor from the home page?',
    'api_version' => 2,
    'module' => 'sr_core',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implements hook_image_default_styles().
 */
function sr_core_image_default_styles() {
  $styles = array();

  // Exported image style: gallery
  $styles['gallery'] = array(
    'name' => 'gallery',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '400',
          'height' => '250',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: sponsor_logo
  $styles['sponsor_logo'] = array(
    'name' => 'sponsor_logo',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '110',
          'height' => '110',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sr_core_node_info() {
  $items = array(
    'advocacy_campaign' => array(
      'name' => t('Advocacy Campaign'),
      'base' => 'node_content',
      'description' => t('Create an advocacy campaign'),
      'has_title' => '1',
      'title_label' => t('Advocacy Campaign Name'),
      'help' => '',
    ),
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('An announcement to show up on the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo_gallery' => array(
      'name' => t('Photo Gallery'),
      'base' => 'node_content',
      'description' => t('A collection of photos '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('For adding Street Roots staff, board members, etc on the website. <strong>This is NOT the same as Vendor Profile!</strong>'),
      'has_title' => '1',
      'title_label' => t('Name (first and last)'),
      'help' => '',
    ),
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Add a sponsor to the site.'),
      'has_title' => '1',
      'title_label' => t('Sponsor name'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Testimonial about Street Roots to show up on various pages of the website (this will show up depending on the Relationship term you select, i.e., Vendor).'),
      'has_title' => '1',
      'title_label' => t('Testimonial'),
      'help' => t('Testimonial about Street Roots to show up on various pages of the website (set this by choosing the proper Relationship term, i.e., Vendor).'),
    ),
    'vendor_profile' => array(
      'name' => t('Vendor Profile'),
      'base' => 'node_content',
      'description' => t('Vendor Profile'),
      'has_title' => '1',
      'title_label' => t('Vendor Name'),
      'help' => t('You\'ll need an image of the featured vendor as well as a 600-800 word bio.'),
    ),
    'volunteer_job_description' => array(
      'name' => t('Volunteer Job Description'),
      'base' => 'node_content',
      'description' => t('Here is where to post volunteer job descriptions. They will show up on the Volunteer page under "Current volunteer opportunities."'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => t('Please enter the title of the volunteer opportunity (i.e., front desk morning shift). Make it clear and descriptive. This is what will show up on the list of Volunteer Opportunities on the Volunteer page.'),
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
