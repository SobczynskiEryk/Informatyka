<!DOCTYPA html>
<html land="pl" dir="ltr">
<head>
    
    <meta charset="utf-8">
    <tittle></tittle>
    
    </head>
    <body>
    
    <?php
        
        //typ string
        
    $name='janusz';
        
    $name1='janusz';
        
    $name2='janusz';
        
        echo"$name";
        
            echo'$name';
        
        echo '<br>Imie: '.$name.'<hr>';
        echo '<br>Imie: ',$name,'<hr>';
        
        //typ intiger
        
        $calkowita = 10;
    
        $hex = 0xa; //10
        
        $oct = 020; //16
        
        $bin = 0b1010; //10
       
        echo $bin, '<hr>';
        
        //Skladnia heredoc
        
        $name = 'Kasia';
        
        $city = 'Poznań';
        
        echo <<< ETYKIETA
        Twoje imie: $name<br>
        Twoje miasto: $city<hr>
        
        ETYKIETA;
        
        $text = <<< E
        Twoje imie: $name<br>
        Twoje miasto: $city<hr>
        
        E;
        
        echo $text;
        
        //skladnia nowdoc
        
        echo <<< 'ET'
        Nowdoc<br>
        Twoje imie: $name<br>
        Twoje miasto: $city<hr>
        
        ET;
        
            ?>
    
    </body>
</html>