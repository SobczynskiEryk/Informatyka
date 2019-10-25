<!DOCTYPE html>
<html>
<head>
    <meta charset='utf-8'>
    <meta http-equiv='X-UA-Compatible' content='IE=edge'>
    <title>Page Title</title>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
</head>
<body>
    <?php
    $x=1;
   
    echo"<table border>";
    do{
        $y=1;
        echo"<tr>";
        do{
   
            

 if($x == $y)
 {
     echo'<td style="background-color: red;">',$x*$y,'</td>';
 }
 else{
    echo '<td>',$x*$y,'</td>';
 }
 $y++;
 
        }while($y<=10);
 echo"</tr>";
 $x++;
    }while($x<=10);
    echo "</table>";
?>
</body>
</html>