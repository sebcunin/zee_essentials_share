<?php
/**
 * $variables:
 *  - link_share ( lien sur la partage de page interne)
 *  - link_share_fb (lien de partage sur Facebook)
 *  - link_share_tw (lien de partage sur Twitter)
 *  - link_share_gp (lien de partage sur Google Plus)
 *  - link_share_li (lien de partage sur LinkedIn)
 * */
?>

<?php if($is_enabled):?>
<div class="social-sharing">
	<span class="social-sharing_title"><?php print t('Share : ') ?></span>
	<a href="<?php print $link_share;?>" class="colorbox-load btn btn-social btn-mail" ><i class="icon-mail"></i><span>par mail</span></a><a href="<?php print $link_share_fb;?>" class="btn btn-social btn-facebook" target="_blank"><i class="icon-facebook"></i><span>facebook</span></a><a href="<?php print $link_share_tw;?>" class="btn btn-social btn-twitter" target="_blank"><i class="icon-twitter"></i><span>twitter</span></a><a href="<?php print $link_share_li;?>" class="btn btn-social btn-linkedin" target="_blank"><i class="icon-linkedin"></i><span>linked</span></a><a href="<?php print $link_share_gp;?>" class="btn btn-social btn-gplus" target="_blank"><i class="icon-googleplus"></i><span>google plus</span></a>
</div>
<?php endif;?>
