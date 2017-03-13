<?php
/**
 * @file
 * timebank_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function timebank_features_taxonomy_default_vocabularies() {
  return array(
    'offers_wants_categories' => array(
      'name' => 'Market sectors',
      'machine_name' => 'offers_wants_categories',
      'description' => 'For categorising community activities. Use like the Yellow pages',
      'hierarchy' => 1,
      'module' => 'offers_wants',
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
