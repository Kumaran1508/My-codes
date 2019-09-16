<?php
if(isset($_POST['submit']))
{
    if(!$conn){
	
        echo 'database not connected';
    }
    $x=0;
    while($x<count$_FILES['file']['name']){
 $file=$_FILES['file'][$x];
 $filename= $_FILES['file']['name'][$x];
 $filetmpname= $file['tmp_name'][$x];
 $filesize= $file['size'][$x];
 $fileerror= $file['error'][$x];
 $filetype= $file['type'][$x];

 $fileext=explode('.',$filename);
 $fileactualext=strtolower(end($fileext));



 $allowed=array('jpeg','pdf','jpg','png','pptx','txt','c');
if(in_array($fileactualext,$allowed))
{
    if($fileerror===0)
    {
        if($filesize<=1000000)
        {
            $newfile= $filename.".".$fileactualext;
            $dest='uploads/'.$newfile;
            move_uploaded_file($filetmpname,$dest);
            echo $filename." uploaded sucessfully";
        }
        else
        {
            echo $filename." : Too big file";
        }
    }
    else
    {
      echo $filename." : Can't upload this file as it has error";
    }
}
else
{
    echo $fileactualext." : Can't upload this file type";
}
}
$x++;
}
?>