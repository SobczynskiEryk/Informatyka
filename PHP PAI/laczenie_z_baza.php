<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    
    <?php
    
    $connect = mysqli_connect("localhost","root","","sklep");
mysqli_set_charset($connect,"utf8");


    $sql = "SELECT `nazwa` FROM `towary` WHERE `promocja`=1";

$result = mysqli_query($connect,$sql);
echo "<ul>";
while($row = mysqli_fetch_assoc($result)){

    echo "<li>",$row["nazwa"],"</li>";
}
echo "</ul>";
    mysqli_close($connect);
    
    ?>

    <form method="post">
    <select name="towar">
    <option value ="c">Czekolada</option>
    <option value ="g">grześki</option>
    <option value ="b">baton</option>
    <option value ="w">wafle</option>
    </select>
<input type="submit" name="button" value="WYBIERZ">
    </from>
    <br>

<?php

if (isset($_POST["towar"])){
    $towar = $_POST['towar'];
switch($towar){
    case 'c':
        $towar = "Czekolada";
    break;
    case 'g':
        $towar = "Grześki";
    break;
    case 'b':
        $towar = "baton";
    break;
    case 'w':
        $towar = "wafle";
    break;
}
//echo $towar;

$sql = "SELECT `cena` FROM `towary` WHERE `nazwa` = '$towar'";

$connect = mysqli_connect("localhost","root","","sklep");

mysqli_set_charset($connect, "utf8");

$result= mysqli_query($connect, $sql);

$row = mysqli_fetch_assoc($result);

$promotion = round($row["cena"] * 0.85, 2);

echo $promotion;

mysqli_close($connect);

}

?>

</body>
</html>