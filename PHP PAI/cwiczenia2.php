<!DOCTYPA html>
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
            
        
        
            ?>
    
    </body>
</html>