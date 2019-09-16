<?php
$x=0;
$event=$_POST['event'];
while($x<count($_FILES['file']['name'])){
	//$file = $_FILES['file'][$x];
	$filename= $_FILES['file']['name'][$x];
	
	$allowed=array('jpeg','gif','jpg','png');
	
	$fileext=explode('.',$filename);
 	$fileactualext=strtolower(end($fileext));

	if(in_array($fileactualext,$allowed))
	{
	move_uploaded_file($_FILES['file']['tmp_name'][$x], "data/img/" . $filename);
	
	$imgname = $filename;

	$conn = mysqli_connect('localhost','root','','Data');


	$mysql = "INSERT INTO `img`(`imgfile`,`eventz`) VALUES ('$imgname','$event')";

	if(!$conn){
	
		echo 'database not connected';
	}


	if(!mysqli_query($conn,$mysql)){
		echo "not working";
	} 
	else {
		header("location:index.php");
	}
	
	}
	else
	{
		echo $imgname." cannot be uploaded";
	}
	$x++;
}
?>
