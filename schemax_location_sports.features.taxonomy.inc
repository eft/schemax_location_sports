<?php
/**
 * @file
 * schemax_location_sports.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function schemax_location_sports_taxonomy_default_vocabularies() {
  return array(
    'playing_surface' => array(
      'name' => 'Playing Surface',
      'machine_name' => 'playing_surface',
      'description' => 'e.g. artificial turf, grass, gravel, wood (indoor)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
