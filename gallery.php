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
          <h1><span class="highlight">#</span>GALLERY</h1>
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
    
$conn = mysqli_connect('localhost','root','', 'Data');



$events = "SELECT DISTINCT eventz FROM img ORDER BY uploadtime,yearz DESC";
$evtres = mysqli_query($conn,$events);
$evtlist= array();
while($evtname = mysqli_fetch_assoc($evtres))
{
array_push($evtlist,$evtname['eventz']);
}


foreach ($evtlist as $evt){
  $evtup=strtoupper($evt);
  echo "<h1><center>".$evtup.'<br/></center></h1>';


$sql1 = "SELECT * FROM Img ORDER BY uploadtime DESC";
$result = mysqli_query($conn,$sql1);
$queryResult = mysqli_num_rows($result);
    
    
if($queryResult > 0) 
{
    while ($row = mysqli_fetch_assoc($result)) 
    {
        $img="data/img/".$row['imgfile'];
        
        if($row['eventz']==$evt){
          echo "<center>".$img."</center>";
          echo "<div class='main'><center>
        <img src=$img width=700></center></div>";
        }
    }
} 
else 
{
        echo "<p> there are no images </p>";
}
}    


?>

<footer>
      <p>&copy; Copyright 2019</p>
</footer>
</body>
</html>