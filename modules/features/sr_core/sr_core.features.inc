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
 * Implements hook_node_info().
 */
function sr_core_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('An announcement to show up on the home page'),
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
  );
  return $items;
}
