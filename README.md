#Zee Essentials Share

## Webform
Un webform doit être rattaché à la page en cours de lecture,
celle est visible via l'url *node/NID/share_email* 

Un *hook_form_alter* est crée pour permettre d'alimenter le webform avec les données de la page en cours de lectiure.
Ses données sont le titre de la page et l'url compléte de la page.



### Des champs présents dans le webform
1. Votre nom et votre prénom,
2. Votre email,
3. Son prénom et son nom,
4. Son email,
5. Son message,
6. Titre de la page,
7. Url complète de la page partagée,
8. Sujet du message (par ex: Partage d'un article %title%),


Voir le template TXT pour avoir un example de datas

## Twitter
Pour le partage Twitter, on utilise la fonction `zee_essentials_share_get_link_tw()`
Elle retourne l'url complète avec le titre et avec une information sur le compte Twitter

## Google Plus
idem à twitter

## LinkedIn
idem à twitter

