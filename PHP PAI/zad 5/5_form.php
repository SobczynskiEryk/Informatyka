<!DOCTYPE html>
<head>
    <meta charset="utf-8">
    <meta lang="pl">
    <link rel="stylesheet" href="css/style.css"
</head>
<body>
<form method="post">

    <input type="text" name="name" placeholder="podaj imie" autofocus autocomplete="off"><br><br>
    <input type="number" name="age" placeholder="Podaj wiek"> <br><br>
    <input type="submit" name="button" value="Zatwierdź">

</form><hr>
    <?php
    if (!empty($_POST['name'])){
    $name = $_POST['name'];
    $age = $_POST['age'];
        echo "Przed poprawą: imie $name, wiek: $age<br>";
        $nameNew = strtolower(trim($name));
        $rozmiarNew = strlen($nameNew);
        if($rozmiarNew > 10){
            $nameNew = substr($nameNew, 0, 10);}
        echo "Poprawne dane: $nameNew, wiek: $age<br>";
    }
    ?>
    <table>
    <tr>
    
    <th>Imię</th>
        
    <th>Wiek</th>
        
    </tr>
    <tr>
    
    <td><?php echo $nameNew; ?></td>
    <td><?php echo $age; ?></td>
    
    </tr>
        </table>
</body>
    
</html>