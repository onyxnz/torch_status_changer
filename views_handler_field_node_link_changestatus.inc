<?php

class views_handler_field_node_link_changestatus extends views_handler_field_node_link {

  /**
   * Renders the links.
   */
  public function render_link($node, $values) {
   
    if (!user_access('change status')) {
      return;
    }
//need to build dropdown then return it. For the moment, singular link should work
$tid=515;
    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "/node/$node->nid/edit/status/$tid";
    $this->options['alter']['query'] = backdrop_get_destination();

    $text = !empty($this->options['text']) ? $this->options['text'] : t('change');
    return $text;
  }
}
