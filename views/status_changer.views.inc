<?php

/**
 * Implements hook_views_data().
 */
function status_changer_views_data() {

}

/**
 * Implements hook_views_handlers().
 */
function status_changer_views_handlers() {
  return array(
    'info' => array(
      'path' => backdrop_get_path('module', 'status_changer') . '/views',
    ),
    'handlers' => array(
      'views_handler_field_node_link_changestatus' => array(
        'parent' => 'views_handler_field_node_link',
      ),
     
    ),
  );
}
