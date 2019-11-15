<?php 

session_start();
($_SESSION["name"])

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Strona startowa</title>
</head>
<body>
    Strona startowa<br>
    Witamy
    <?php
    
    echo $_SESSION["name"],"<br>";
    ?>
    Na stronie
    <?php
    
    echo "Identyfikator sesji: ", session_id();
    
    ?>
     <a href="./sesja2.php">sesja 2</a>
</body>
</html>