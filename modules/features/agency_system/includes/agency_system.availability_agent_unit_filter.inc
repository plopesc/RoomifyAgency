<?php

/**
 * Filter by units selected in search form.
 */
class AvailabilityAgentUnitFilter extends AvailabilityAgentFilterBase {

  /**
   * {@inheritdoc}
   */
  public function applyFilter() {
    if ($unit_ids = static::getUnitsFromPath()) {
      $this->units = array_intersect_key($this->units, array_flip($unit_ids));
    }

    return $this->units;
  }

  /**
   * {@inheritdoc}
   */
  public static function availabilitySearchParameters() {
    return array(
      'bookable_units',
    );
  }

  /**
   * {@inheritdoc}
   */
  public static function availabilitySearchForm(&$form, &$form_state) {
    $options = array();
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'rooms_unit')
      ->execute();
    if (!empty($result['rooms_unit'])) {
      $units = entity_load('rooms_unit', array_keys($result['rooms_unit']));
      foreach ($units as $unit_id => $unit) {
        $options[$unit_id] = $unit->name;
      }

      $form['bookable_units'] = array(
        '#type' => 'select',
        '#title' => t('Select units'),
        '#options' => $options,
        '#multiple' => TRUE,
        '#default_value' => static::getUnitsFromPath(),
      );
    }

    $form['conditions']['rooms']['#access'] = FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public static function availabilityChangeSearchForm(&$form, &$form_state) {
    if ($unit_ids = static::getUnitsFromPath()) {
      $form['info']['params']['bookable_units'] = array(
        '#type' => 'hidden',
        '#value' => implode(',',$unit_ids),
      );

      $units = entity_load('rooms_unit', $unit_ids);
      $unit_labels = array();
      foreach ($units as $unit) {
        $unit_labels[] = $unit->name;
      }

      $form['info']['bookable_units'] = array(
        '#theme' => 'container',
        '#markup' => '<label>' . t('Selected units') . '</label> <span class="info">' . implode(', ', $unit_labels) . '</span>',
        '#attributes' => array('class' => array('rooms-current-search__units', 'form-item')),
      );
      $form['info']['actions']['#weight'] = 100;
      $form['info']['actions']['change_search']['#submit'][] = 'agency_system_availability_change_search_form_submit';
    }
  }

  /**
   * Retrieves list os bookable units from path.
   *
   * @return array|bool
   *   Array containing bookable unit lists or FALSE if empty.
   */
  public static function getUnitsFromPath() {
    $unit_ids = array();
    if (isset($_GET['bookable_units'])) {
      $unit_ids = array_filter(explode(',', check_plain($_GET['bookable_units'])), 'is_numeric');
    }
    return !empty($unit_ids) ? $unit_ids : FALSE;
  }

}
