<?php
/**
 * @file
 * os2web_base_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function os2web_base_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_business';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Erhverv';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_meganews-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'erhverv',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega aktuelle-emner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_selfserv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => 'erhverv',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'os2web_base_panels_view_selfserv-erhverv',
      'css_class' => 'grid-3 alpha omega os2web_base_panels_view_selfserv-mega-width',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['right'][1] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mega_business'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_citizen';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Borger';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_meganews-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'borger',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega aktuelle-emner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['right'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_selfserv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'borger',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'os2web_base_panels_view_selfserv-borger',
      'css_class' => 'grid-3 alpha omega os2web_base_panels_view_selfserv-mega-width',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right'][1] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mega_citizen'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_politics';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Politik og planer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['left'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_meganews-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'politik & planer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega aktuelle-emner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['right'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_selfserv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => 'politik & planer',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'os2web_base_panels_view_selfserv-politik',
      'css_class' => 'grid-3 alpha omega os2web_base_panels_view_selfserv-mega-width',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['right'][1] = 'new-9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mega_politics'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mini_footer';
  $mini->category = '';
  $mini->admin_title = 'Footer menuer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Borger',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-2 alpha',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['center'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Erhverv',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['center'][1] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Politik & Planer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-2',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['center'][2] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_selfserv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-2 omega',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['center'][3] = 'new-13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mini_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mini_otherweb';
  $mini->category = '';
  $mini->admin_title = 'Andre kommunale websites';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'nice_menus-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['middle'][0] = 'new-14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mini_otherweb'] = $mini;

  return $export;
}
