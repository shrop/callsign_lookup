<?php

/**
 * @file
 * Admin page callbacks for the callsign_lookup.module.
 */

/**
 * Admin form.
 */
function callsign_lookup_admin_form() {
  $form['callsign_lookup_api_url'] = array(
    '#type' => 'textfield',
    '#title' => t('FCC Licence View API URL'),
    '#description' => t('FCC Licence View API URL for callsign lookups.'),
    '#default_value' => variable_get('callsign_lookup_api_url', 'http://data.fcc.gov/api/license-view/basicSearch/getLicenses'),
  );
  $form['callsign_lookup_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Debug mode'),
    '#description' => t('Turn on debug mode to see actually response from the API.'),
    '#default_value' => variable_get('callsign_lookup_debug', FALSE),
  );

  return system_settings_form($form);
}
