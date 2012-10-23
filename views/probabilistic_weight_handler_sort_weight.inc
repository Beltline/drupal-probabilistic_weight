<?php

/**
 * @file
 * Views handler to sort taking into account probabilistic weight.
 */

/**
 * Sort handler for probabilistic weight.
 *
 * @ingroup views_sort_handlers
 */
class probabilistic_weight_handler_sort_weight extends views_handler_sort {

  /**
   * Called to add the sort to a query.
   */
  public function query() {

    $current_field = $this->field;
    $found_alias = NULL;

    foreach ($this->query->fields as $field) {
      if ($field['field'] == $current_field) {
        $found_alias = $field['alias'];
      }
    }

    if ($found_alias) {
      $this->query->add_orderby(
        NULL,
        'RAND() * ' . $current_field,
        $this->options['order'],
        $current_field . '_sort'
      );
    }

  }

  /**
   * Information about options are defined here.
   */
  public function option_definition() {

    $options = parent::option_definition();
    $options['order'] = array('default' => 'DESC');
    $options['exposed'] = array('default' => FALSE, 'bool' => TRUE);
    $options['expose'] = array(
      'contains' => array(
        'label' => array('default' => '', 'translatable' => TRUE),
      ),
    );
    return $options;

  }

}
