<?php
/**
 * @file
 * agency_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function agency_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Blog post',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog_post',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bdfbe48f-f065-4ea6-9330-0aca5c08a60f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e6654fa-3dc8-4184-84fa-9162d57b3db4';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e6654fa-3dc8-4184-84fa-9162d57b3db4';
    $display->content['new-0e6654fa-3dc8-4184-84fa-9162d57b3db4'] = $pane;
    $display->panels['left'][0] = 'new-0e6654fa-3dc8-4184-84fa-9162d57b3db4';
    $pane = new stdClass();
    $pane->pid = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '616ba109-af3e-4b9d-b240-c52afc39d04f';
    $display->content['new-616ba109-af3e-4b9d-b240-c52afc39d04f'] = $pane;
    $display->panels['left'][1] = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
    $pane = new stdClass();
    $pane->pid = 'new-5d67b4c8-2c35-4cad-8749-2e904e64a854';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'rrssb-rrssb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5d67b4c8-2c35-4cad-8749-2e904e64a854';
    $display->content['new-5d67b4c8-2c35-4cad-8749-2e904e64a854'] = $pane;
    $display->panels['left'][2] = 'new-5d67b4c8-2c35-4cad-8749-2e904e64a854';
    $pane = new stdClass();
    $pane->pid = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '76512c7e-4af9-4fde-a085-5210d11581dc';
    $display->content['new-76512c7e-4af9-4fde-a085-5210d11581dc'] = $pane;
    $display->panels['left'][3] = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
    $pane = new stdClass();
    $pane->pid = 'new-25e3ef8a-a496-41a0-9cb8-4842fa2fd90d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '25e3ef8a-a496-41a0-9cb8-4842fa2fd90d';
    $display->content['new-25e3ef8a-a496-41a0-9cb8-4842fa2fd90d'] = $pane;
    $display->panels['right'][0] = 'new-25e3ef8a-a496-41a0-9cb8-4842fa2fd90d';
    $pane = new stdClass();
    $pane->pid = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ce9eb59-d184-4caf-96df-52dd072a3c8a';
    $display->content['new-7ce9eb59-d184-4caf-96df-52dd072a3c8a'] = $pane;
    $display->panels['right'][1] = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function agency_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panel_context_ef468927-73d8-4605-8bd7-497e37a6e952';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '63f37ac1-85a0-447a-929f-f94334989411';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5f481a2-4a92-4979-8b96-0df1802822f0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5f481a2-4a92-4979-8b96-0df1802822f0';
    $display->content['new-b5f481a2-4a92-4979-8b96-0df1802822f0'] = $pane;
    $display->panels['middle'][0] = 'new-b5f481a2-4a92-4979-8b96-0df1802822f0';
    $pane = new stdClass();
    $pane->pid = 'new-db7de4cf-87c5-4322-ab65-4c1878d0449e';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db7de4cf-87c5-4322-ab65-4c1878d0449e';
    $display->content['new-db7de4cf-87c5-4322-ab65-4c1878d0449e'] = $pane;
    $display->panels['top'][0] = 'new-db7de4cf-87c5-4322-ab65-4c1878d0449e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
