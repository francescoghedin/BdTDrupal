<?php
/**
 * @file
 * timebank_features2.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function timebank_features2_taxonomy_default_vocabularies() {
  return array(
    'forums' => array(
      'name' => 'Forum',
      'machine_name' => 'forums',
      'description' => 'Vocabolario per la navigazione del forum',
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 1,
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
    'offers_wants_types' => array(
      'name' => 'Offer/want types',
      'machine_name' => 'offers_wants_types',
      'description' => 'This vocabulary provides another dimension for dicing offers/wants. Makes a view tab on the views pages',
      'hierarchy' => 0,
      'module' => 'offers_wants',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
    'tags' => array(
      'name' => 'Tag',
      'machine_name' => 'tags',
      'description' => 'Utilizza i tag per organizzare in categorie i contenuti riguardanti lo stesso argomento.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
