<?php
/**
 * @file
 * timebank_features2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function timebank_features2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menu principale',
    'description' => 'Il <em>Menu principale</em> è usato in molti siti per elencare le sezioni principali del sito, spesso disposto in una barra orizzontale in alto.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-it-menu.
  $menus['menu-it-menu'] = array(
    'menu_name' => 'menu-it-menu',
    'title' => 'it-menu',
    'description' => 'menu in italiano',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'Il menu <em>Utente</em> contiene collegamenti relativi al profilo utente, così come il collegamento per la disconnessione.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Il <em>Menu principale</em> è usato in molti siti per elencare le sezioni principali del sito, spesso disposto in una barra orizzontale in alto.');
  t('Il menu <em>Utente</em> contiene collegamenti relativi al profilo utente, così come il collegamento per la disconnessione.');
  t('Menu principale');
  t('User menu');
  t('it-menu');
  t('menu in italiano');

  return $menus;
}
