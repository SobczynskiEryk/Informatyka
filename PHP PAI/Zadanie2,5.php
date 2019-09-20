<!DOCTYPE html>
<html land="pl" dir="ltr">
<head>
    
    <meta charset="utf-8">
    <tittle></tittle>
    
    </head>
    <body>
    
    <?php
        
        //php wersja
   //echo phpinfo();
        
        //potęgi
        
        $potega = 2**10;
        echo $potega , '<hr>';
        
        //operacje na zmiennych (and &, or |, not, ~, xor ^, >>, << )
        
        $x = 0b1010; //10
        
        echo $x, '<br>';
        
        $x = $x >> 1; //101
        
        echo $x,  '<br>';
        
        $x = $x << 2; //10100
        
        echo $x,  '<hr>';
        
    ##################################################################################################################
        //sprawdzenie
        
        $x = 1;
        $y = 1;
        $wynik = $x <=> $y;
        
        echo $wynik, '<hr>';
        
        $z = 2;
        $a = 1.0;
        if($z == $a)
        {echo "Identyczna", '<br>';}
        else{
            echo "Różna", '<br>';
        }
      echo gettype($x);
        echo gettype($y);
        echo '<hr>';
        
        $x = 2;
        echo $x++, '<br>';
        echo ++$x, '<br>';
        echo $x, '<br>';
        $y = $x++;
        echo $y, '<br>';
        $y = ++$x;
        echo $y, '<br>';
        echo ++$y, '<br>';
        echo '<hr>';
        
        //operatory rzutowania
        $text1 = '997abc';
        $text2 = 1;
        $text3 = 1;
        $text4;
        
        $x1 = (int)$text1;
        echo $x1, '<br>';
        
          $x2 = (bool)$text2;
        echo $x2, '<br>';
        
                  $x3 = (unset)$text3;
        echo gettype($x3);
        echo $x3, '<br>';
        
        echo $text4;
        echo @gettype($text4), '<hr>';
        //rozmiar typu int
        echo PHP_INT_SIZE,'<hr>';
        //kontrola typ zmiennych
        $x = 'text';
        echo is_string($x), '<br>';
        echo is_int($x), '<br>';
        echo is_null($x), '<br>';
        echo is_bool($x), '<br>';
        echo is_float($x), '<br>';
        #############################################################################################################
        //zmienne superglobalne
        //$_GET, $_POST, $_COOKIE, $_FILES, $SESSION, $_SERVER
        
            ?>
    
    </body>
</html>