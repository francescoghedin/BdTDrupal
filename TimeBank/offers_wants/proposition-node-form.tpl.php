<?php
  $form = &$variables['form'];
  unset($form['comment_settings']);
?>
<div class="node-form">
  <div style="width:99%;">
  	<img src="http://icons.iconarchive.com/icons/icojam/blue-bits/16/question-faq-icon.png" style="border:0px; padding:0px; margin: 0px 0px 0px 0px;"/> If you need help filling the form <a href="http://stagebancadeltempo.altervista.org/portale/?q=node/5">click here!</a>
  	<br/>
    <?php print drupal_render($form['want']); ?>
    <?php print drupal_render($form['title']); ?>
    <?php print drupal_render($form['body']); ?>

    
    <?php print drupal_render($form['offers_wants_categories']); ?>
    <?php print drupal_render($form['offers_wants_types']); ?>
  

  
    <?php print drupal_render($form['author']); ?>
    <?php print drupal_render($form['image']); ?>
    <?php print drupal_render($form['end']); ?>
  </div>

<br style = "clear:both;" />
<?php print drupal_render_children($form); ?>

<div class="options">
  <?php print drupal_render($form['additional_settings']); ?>
</div>

  <?php print drupal_render($form['actions']); ?>
</div>
