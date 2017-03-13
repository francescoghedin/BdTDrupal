<?php
/**
 * @file
 * timebank_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function timebank_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_proposition-comment_body'.
  $field_instances['comment-comment_node_proposition-comment_body'] = array(
    'bundle' => 'comment_node_proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your comment will be mailed instantly to the author of the ad',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-proposition-body'.
  $field_instances['node-proposition-body'] = array(
    'bundle' => 'proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Tell your story...',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-proposition-field_dammi_il_percorso'.
  $field_instances['node-proposition-field_dammi_il_percorso'] = array(
    'bundle' => 'proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'getdirections_fields',
        'settings' => array(
          'default' => array(
            'advanced_alternate' => 0,
            'advanced_autocomplete' => 0,
            'advanced_autocomplete_bias' => 0,
            'advanced_autocomplete_via' => 0,
            'advanced_autocomplete_via_width' => 20,
            'baselayers' => array(
              'Hybrid' => 1,
              'Map' => 1,
              'OpenStreetMap' => 0,
              'Physical' => 1,
              'Satellite' => 1,
            ),
            'controltype' => 'small',
            'draggable' => 1,
            'from_width' => 20,
            'height' => '200px',
            'latlong' => '40,0',
            'map_backgroundcolor' => '',
            'maptype' => 'Map',
            'mtc' => 'standard',
            'nodoubleclickzoom' => 0,
            'nokeyboard' => 0,
            'overview' => 0,
            'overview_opened' => 0,
            'pancontrol' => 1,
            'region_bias' => 'IT',
            'scale' => 0,
            'scrollwheel' => 0,
            'streetview_show' => 0,
            'to_width' => 20,
            'transit_date_format' => 'int',
            'transit_dates' => 0,
            'travelextras_show' => 0,
            'travelmode_show' => 0,
            'unitsystem' => 'metric',
            'use_advanced' => 0,
            'use_country_dropdown' => 1,
            'use_https' => 0,
            'waypoint_color' => 'white',
            'waypoints' => 0,
            'waypoints_optimise' => 0,
            'width' => '300px',
            'zoom' => 3,
          ),
          'direction_opt' => 'to',
          'direction_options' => array(
            'from' => 'From',
            'to' => 'To',
          ),
          'misc' => array(
            'bicycleinfo' => 0,
            'bicycleinfo_state' => 0,
            'geolocation_enable' => 0,
            'geolocation_mobile_check' => 1,
            'geolocation_option' => 1,
            'keep_title' => 0,
            'panoramio_show' => 0,
            'panoramio_state' => 0,
            'panoramio_use' => 0,
            'show_distance' => 0,
            'show_duration' => 0,
            'switchfromto' => 0,
            'trafficinfo' => 0,
            'trafficinfo_state' => 0,
            'transitinfo' => 0,
            'transitinfo_state' => 0,
            'weather_clickable' => 1,
            'weather_cloud' => 1,
            'weather_cloud_state' => 0,
            'weather_info' => 1,
            'weather_label' => 0,
            'weather_show' => 0,
            'weather_speed' => 1,
            'weather_state' => 0,
            'weather_temp' => 1,
            'weather_use' => 0,
          ),
        ),
        'type' => 'getdirections_fields_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dammi_il_percorso',
    'label' => 'Dammi il percorso',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'getdirections_fields',
      'settings' => array(),
      'type' => 'getdirections_fields_default',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-proposition-field_data_inizio'.
  $field_instances['node-proposition-field_data_inizio'] = array(
    'bundle' => 'proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_inizio',
    'label' => 'Data inizio',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-proposition-field_prenota'.
  $field_instances['node-proposition-field_prenota'] = array(
    'bundle' => 'proposition',
    'default_value' => array(
      0 => array(
        'registration_type' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => NULL,
          'label' => NULL,
        ),
        'type' => 'registration_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_prenota',
    'label' => 'Prenota',
    'required' => 0,
    'settings' => array(
      'default_registration_settings' => array(
        'capacity' => 0,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => NULL,
            'reminder_template' => '',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => NULL,
          'open' => NULL,
        ),
        'settings' => array(
          'confirmation' => 'Registration has been saved.',
          'confirmation_redirect' => '',
          'from_address' => 'timebankdrupal@gmail.com',
          'maximum_spaces' => 1,
          'multiple_registrations' => 0,
          'registration_entity_access_roles' => array(
            2 => 0,
            3 => 0,
          ),
          'registration_waitlist_capacity' => 0,
          'registration_waitlist_enable' => 0,
          'registration_waitlist_message' => 'Please note: completing this registration form will place you on a waitlist as there are currently no places left.',
          'registration_waitlist_message_enable' => 1,
        ),
        'status' => 0,
      ),
      'hide_register_tab' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-proposition-field_rate_this'.
  $field_instances['node-proposition-field_rate_this'] = array(
    'bundle' => 'proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'default',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rate_this',
    'label' => 'Rate this',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'exposed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-proposition-field_where_i_am'.
  $field_instances['node-proposition-field_where_i_am'] = array(
    'bundle' => 'proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'geolocation',
        'settings' => array(),
        'type' => 'geolocation_latitude',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_where_i_am',
    'label' => 'Where I am',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geolocation_googlemaps',
      'settings' => array(
        'marker_draggable' => 0,
        'scrollwheel' => 1,
      ),
      'type' => 'geolocation_googlemap',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-proposition-image'.
  $field_instances['node-proposition-image'] = array(
    'bundle' => 'proposition',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => '',
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2MB',
      'max_resolution' => '1024x768',
      'min_resolution' => '400x300',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-proposition-offers_wants_categories'.
  $field_instances['node-proposition-offers_wants_categories'] = array(
    'bundle' => 'proposition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Main categorisation for offers and wants',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'shs',
        'settings' => array(
          'linked' => FALSE,
        ),
        'type' => 'shs_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'offers_wants_categories',
    'label' => 'Offer/want categories',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 1,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'transaction-transaction-field_comportamento'.
  $field_instances['transaction-transaction-field_comportamento'] = array(
    'bundle' => 'transaction',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'transaction',
    'field_name' => 'field_comportamento',
    'label' => 'comportamento',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'stars',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'transaction-transaction-field_puntualita'.
  $field_instances['transaction-transaction-field_puntualita'] = array(
    'bundle' => 'transaction',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'transaction',
    'field_name' => 'field_puntualita',
    'label' => 'puntualita',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'stars',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'transaction-transaction-field_rate_this'.
  $field_instances['transaction-transaction-field_rate_this'] = array(
    'bundle' => 'transaction',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'transaction',
    'field_name' => 'field_rate_this',
    'label' => 'capacita',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'stars',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'transaction-transaction-worth'.
  $field_instances['transaction-transaction-worth'] = array(
    'bundle' => 'transaction',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mcapi',
        'settings' => array(),
        'type' => 'worth_field',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'transaction',
    'field_name' => 'worth',
    'label' => 'Worth',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'mcapi',
      'settings' => array(),
      'type' => 'worths_widget',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment');
  t('Dammi il percorso');
  t('Data inizio');
  t('Image');
  t('Main categorisation for offers and wants');
  t('Offer/want categories');
  t('Prenota');
  t('Rate this');
  t('Tell your story...');
  t('Where I am');
  t('Worth');
  t('Your comment will be mailed instantly to the author of the ad');
  t('capacita');
  t('comportamento');
  t('puntualita');

  return $field_instances;
}
