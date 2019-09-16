<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width">
    <title>#1</title>
    <link rel="stylesheet" href="./style/customstyle.css">
    
  </head>
  <body>
    <header>
      <div class="container">
        <div id="branding">
          <h1><span class="highlight">#</span>UPLOAD</h1>
        </div>

      </div>
      
    </header>
    <div id="navigation">
       <p><h1>
        <ul>
        <li><button name="home" class="button_12" type="submit"><a href="home.php">HOME</a></button></li>
        <li><button name="events" class="button_12" type="submit"><a href="events.php">EVENTS</a></button></li>
        <li><button name="gallery"  class="button_12"><a href="gallery.php"><a href="gallery.php">GALLERY<a></button></li>
        <li><button name="upload"  class="button_12" type="submit"><a href="index.php">UPLOAD</a></button></li>
       
        
        </ul>
       </h1></p>
    </div>

<?php
  if(isset($_POST['gallery']))
  {}
?>
       
<div class="main" background="backgrounds/redarrows.png">
<center>
<!--img src="data/img/calculator.png"--><br /><br/><br/><br/>
<form method="POST" enctype="multipart/form-data" action="uploadimg.php">
EVENT NAME : <input type="text" name="event"><br/><br/><br/>
<input type="file" name="file[]" multiple="multiple">
<button name="submit" class="button_1" type="submit">Upload</button>
</div>
</center><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
<footer>
      <p>&copy; Copyright 2019</p>
</footer>
</body>
</html>