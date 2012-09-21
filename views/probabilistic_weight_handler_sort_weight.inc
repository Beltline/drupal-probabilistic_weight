<?php

class probabilistic_weight_handler_sort_weight extends views_handler_sort{

    function query(){

        $current_field = $this->field;
        $found_alias = NULL;

        foreach($this->query->fields as $field){
            if($field['field'] == $current_field){
                $found_alias = $field['alias'];
            }
        }

        if($found_alias){
            $this->query->add_orderby(
                NULL,
                'RAND() * ' . $current_field,
                'DESC',
                $current_field . '_sort'
            );
        }

    }

    function options_form(&$form, &$form_state){

        parent::options_form($form, $form_state);
        $form['order']['#access'] = FALSE;

    }

}
