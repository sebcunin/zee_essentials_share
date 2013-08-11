<?php

/**
 * @file zee_essentials_share.admin.inc
 * Page de configuration pour le module Zee Essentials Share
 */

function zee_essentials_share_settings_form($form_state){
  $form = array();
  $form['descritption'] = array('#markup'=> 'Cette page de configuration permet de définir quelques paramètres sur les différentes réseaux sociaux, utilisé par ZeeAgency dans la plupart de ces projets Drupal.');
  
  //TODO: variable_get zeest_account_linkedin
  //TODO: variable_get zeest_webforms_nids
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

  // COMPTE TWITTER
  $form['twitter'] = array();
  $form['twitter']['#type'] = 'fieldset';
  $form['twitter']['#title']  ='Twitter';
  $form['twitter']['#collapsible'] = TRUE;
  $form['twitter']['#collapsed'] = TRUE;

  $account_twitter = array();
  $account_twitter['#type'] = 'textfield';
  $account_twitter['#title'] = 'Compte Twitter';
  $account_twitter['#description'] = 'par ex: @zeeagency';
  $account_twitter['#default_value'] = variable_get('zeest_account_twitter','@zeeagency');
  $form['twitter']['zeest_account_twitter'] = $account_twitter;

  // Message utilisé lors du partage d'une page 
  $message_twitter  = array();
  $message_twitter['#type'] = 'textarea';
  $message_twitter['#rows'] = '2';
  $message_twitter['#title'] = 'Définir le gabarit du message';
  $message_twitter['#description'] = 'par ex: @title, @account et  @url sont des jetons posssibles.';
  $message_twitter['#default_value'] = variable_get('zeest_twitter_message','@title par @account readmore @url');
  $form['twitter']['zeest_twitter_message'] = $message_twitter;



  return system_settings_form($form);
}
