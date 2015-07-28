<?php
/**
 * @file
 * agency_blog.pages_default.inc
 */

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
