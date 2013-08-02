<?php



/**
 * @file zee_essentials_share.admin.inc
 */

function zee_essentials_share_settings_form($form_state){
  $form = array();
  $form['facebook'] = array(
    '#type'         =>  'fieldset',
    '#title'        =>  'Facebook',
    '#description'  =>  'Ci-dessous tous les paramètres pour une utilisation de Facebook.',
    '#collapsible'  =>  TRUE,
    '#collapsed'    =>  FALSE);
   $form['facebook']['zee_essentials_share_facebook_id'] = array(
    '#type'         =>  'textfield',
    '#title'        =>  'Saisir la variable appId',
    '#description'  =>  '<em>appId</em> correspond à l\'identifiant de l\'application Facebook',
    '#default_value'=> variable_get('zee_essentials_share_facebook_id','XXXXXXXXXXXXXXX'),
  );
  return system_settings_form($form);
}
