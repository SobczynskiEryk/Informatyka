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
    if (!empty($_GET['country']) && !empty($_GET['lang'])){
    $country = $_GET['country'];
    $lang=$_GET['lang'];
    switch($lang){
        case 'pl':
        $lang = 'Polska';
        break;
        case 'en':
        $lang= 'Wielka Brytania';
        break;
        default:
        echo "Podaj kraj";



    }
    echo "Kraj: $country Język: $lang";
    }
    
    
    ?>
    <form method="get">
        <input type="text" name="country" placeholder="Podaj kraj" chcecked autofocus>
        <br><br>
        <input type="radio" name="lang" value="pl" chcecked>polski
        <input type="radio" name="lang" value="en">angielski<br><br>
        <input type="submit" name="button" value="Zatwierdź">

    </form>
</body>
</html>