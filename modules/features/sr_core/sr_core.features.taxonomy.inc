<?php
/**
 * @file
 * sr_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sr_core_taxonomy_default_vocabularies() {
  return array(
    'testimonial' => array(
      'name' => 'Testimonial',
      'machine_name' => 'testimonial',
      'description' => 'Who is the testimonial from?',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
