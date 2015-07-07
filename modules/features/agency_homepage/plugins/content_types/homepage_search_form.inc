<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Agency'),
  'title' => t('Agency Homepage Search Form'),
  'description' => t('Provides customized availability search form.'),
  'edit form' => 'agency_homepage_search_edit_form',
  'render callback' => 'agency_homepage_search_render',
);

/**
 * Edit form callback.
 */
function agency_homepage_search_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render callback.
 */
function agency_homepage_search_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->module = 'agency_homepage_search';
  $block->delta = $subtype;
  $block->title = 'Property Search';
  $block->content = array(
    'content' => drupal_get_form('agency_homepage_search'),
  );

  return $block;
}

/**
 * Calendar date browsing form.
 *
 * @param $form
 * @param $form_state
 * @return mixed
 */
function agency_homepage_search($form, $form_state) {
  $params = drupal_get_query_parameters();
  $now = date_create();

  // Year defaults to current year, although we are not filtering yet.
  $default_year = $now->format('Y');

  // Month doesn't have a default selection.
  $default_month = '';

  // drupal_add_js(drupal_get_path('module', 'agency_homepage_search') . '/plugins/content_types/date_browser.js');

  $form['container'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('container-inline'),
    ),
  );

  $options = array(0 => 'All');
  $vid = taxonomy_vocabulary_machine_name_load("location")->vid;
  $terms = taxonomy_get_tree($vid);
  foreach ($terms as $term) {
    $options[$term->tid] = $term->name;
  }

  $form['container']['location'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#chosen' => TRUE,
    '#default_value' => isset($params['location']) ? $params['location'] : 0,
  );

  if (isset($params['rooms_start_date']['date']) && !empty($params['rooms_start_date']['date'])) {
    $arrivalDateTime = DateTime::createFromFormat('d/m/Y', $params['rooms_start_date']['date']);
    $arrival = $arrivalDateTime->format('Y-m-d');
  }
  if (isset($params['rooms_end_date']['date']) && !empty($params['rooms_end_date']['date'])) {
    $departureDateTime = DateTime::createFromFormat('d/m/Y', $params['rooms_end_date']['date']);
    $departure = $departureDateTime->format('Y-m-d');
  }

  // Create unique ids and selectors for each picker.
  $start_date_id = drupal_html_id('datepicker-start-date');
  $start_date_selector = '#' . $start_date_id . ' .form-text';

  $end_date_id = drupal_html_id('datepicker-end-date');
  $end_date_selector = '#' . $start_date_id . ' .form-text';

  // Specify the default datepicker parameters (see date_popup_element_info())
  $datepicker_options = array(
    // 'dateFormat' => 'dd/mm/yy',
    // Limit bookings to X days in advance, depending on the
    // chosen configuration in your Rooms installation, defaults
    // to one day in advance.
    'minDate' => '+' . variable_get('rooms_booking_start_date', 1) . 'd',
  );

  $form['container']['arrival'] = array(
    '#prefix' => '<div class="form-wrapper rooms-date-range"><div class="start-date" id="' . $start_date_id . '">',
    '#suffix' => '</div>',
    '#type' => 'date_popup',
    '#description' => '',
    '#date_format' => variable_get('rooms_date_format', 'd-m-Y'),
    '#attributes' => array('placeholder' => t('arrival')),
    '#default_value' => isset($arrival) ? $arrival : '',
    '#datepicker_options' => array_merge($datepicker_options, array('endDateSelector' => $end_date_selector)),
  );

  $form['container']['departure'] = array(
    '#prefix' => '<div class="end-date" id="' . $end_date_id . '">',
    '#suffix' => '</div></div>',
    '#type' => 'date_popup',
    '#description' => '',
    '#date_format' => variable_get('rooms_date_format', 'd-m-Y'),
    '#attributes' => array('placeholder' => t('departure')),
    '#default_value' => isset($departure) ? $departure : '',
    '#datepicker_options' => array_merge($datepicker_options, array('startDateSelector' => $start_date_selector)),
    '#attached' => array(
      'js' => array(
        drupal_get_path('module', 'rooms') . '/js/rooms_date_popup.js',
        array(
          'data' => array(
            'rooms' => array(
              // 'roomsStartYear' => $year,
              // 'roomsStartMonth' => $month,
              'roomsBookingStartDay' => variable_get('rooms_booking_start_date', 1),
              'roomsDateFormat' => 'dd/mm/yy',

              // Here we create a listing of all datepickers registered on the
              // current page. This is available for use in your own custom
              // jQuery scripts as Drupal.settings.rooms.datepickers.
              'datepickers' => array(
                $start_date_selector => array(
                  'endDateSelector' => $end_date_selector,
                ),
              ),
            ),
          ),
          'type' => 'setting',
        ),
      ),
    ),
  );

  $group_options = array(1 => t('1 guest'));
  $group_size = variable_get('rooms_booking_manager_search_form_max_group_size', 8);
  if ($group_size > 1) {
    for ($i = 2; $i <= $group_size; $i++) {
      $group_options[$i] = $i . t(' guests');
    }
  }

  $form['container']['group_size'] = array(
    '#type' => 'select',
    '#title' => t('Group size'),
    '#description' => '',
    '#options' => $group_options,
    '#default_value' => isset($params['group_size']) ? $params['group_size'] : 2,
  );

  $form['container']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Search',
  );

  return $form;
}

/**
 * Validation handler.
 *
 * @param $form
 * @param $form_state
 */
function agency_homepage_search_validate($form, $form_state) {
  // Don't allow users to only enter one date.
  if (isset($form_state['values']['arrival']) && !isset($form_state['values']['departure'])) {
    form_set_error('departure', t('Please enter a departure date.'));
  }
  elseif (!isset($form_state['values']['arrival']) && isset($form_state['values']['departure'])) {
    form_set_error('arrival', t('Please enter an arrival date.'));
  }
}

/**
 * Submit handler.
 *
 * Redirects the user to search url with the selected options.
 *
 * @param $form
 * @param $form_state
 */
function agency_homepage_search_submit($form, $form_state) {
  $params = drupal_get_query_parameters();

  // @see rooms_date_range_fields().
  $format = 'd/m/Y';

  // Process stay dates.
  if (isset($form_state['values']['arrival']) && !empty($form_state['values']['arrival'])) {
    $arrivalDateTime = DateTime::createFromFormat('Y-m-d', $form_state['values']['arrival']);
    $arrival = $arrivalDateTime->format($format);
  }
  if (isset($form_state['values']['departure']) && !empty($form_state['values']['departure'])) {
    $departureDateTime = DateTime::createFromFormat('Y-m-d', $form_state['values']['departure']);
    $departure = $departureDateTime->format($format);
  }

  // Set location to "All" if not selected.
  $location = $form_state['values']['location'];
  if (!$location) {
    $location = 'All';
  }

  // Set the URL parameters for the view.
  isset($arrival) ? $params['rooms_start_date']['date'] = $arrival : $params['rooms_start_date']['date'] = '';
  isset($departure) ? $params['rooms_end_date']['date'] = $departure : $params['rooms_end_date']['date'] = '';
  $params['group_size'] = $form_state['values']['group_size'];
  $params['location'] = $location;

  $path = 'search-availability';
  $options = array(
    'query' => $params,
  );

  drupal_goto($path, $options);
}

