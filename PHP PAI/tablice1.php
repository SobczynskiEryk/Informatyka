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
//tablice indeksowane numerycznie

$colors = array('Red', 'Green', 'Blue');
$colors[3]='Magenta';

for ($i=0; $i < count($colors); $i++) {
  $elem=$i+1;
  echo "Element $elem: $colors[$i] <br>";
}

function showArray($tab){
  for ($i=0; $i <count($tab) ; $i++) {
    $elem = $i+1;
    echo "Element $elem:$tab[$i]<br>";
  }
}
showArray($colors);
//foreach

foreach ($colors as $value) {
  $elem = $i+1;
  echo "Element $value<br>";
}

foreach ($colors as $key => $value) {
  $elem = $key+1;
  echo "Element $elem: $value<br>";
}

//tablice asocjacyjne

$data = array(
'imie'=>'Kinga',
'nazwisko'=>'Nowak',
'wiek'=>20
);
function showArrayAssoc($tab){
foreach ($tab as $key => $value) {
  echo "$key: $value<br>";
}
}
showArrayAssoc($data);
echo $data['nazwisko'];
echo "<br>$data[nazwisko]";
echo "<br><br>";
//tablice wielowymiarowe

$student = array(
  array('Katarzyna','Nowak'),
  array('Katarzyna'),
  array('Katarzyna','Nowak',30)
);
for ($i=0; $i < count($student); $i++) {
  for ($j=0; $j < count($student[$i]); $j++) {
    echo $student[$i][$j];
  }
  echo "<br>";
}

//sortowanie tablic

//rosnąca

$tab = array(10 ,2 ,1000 ,5 , 75, -4);

function Show($tab){
    foreach($tab as $key => $value){
echo "$key: $value | | ";
    }
    echo "<br>";
}
//niemalejąco wg wartości

show ($tab);
sort ($tab);
show ($tab);

//nierosnące wg wartości

rsort($tab);
show($tab);

//sortowanie tablicy asocjacyjnej

$tabAssoc = array(
    "surname" => "nowak",
    "name" => "anna",
    "age" => 20,
);

//Niemalejąco w tab assoc
show($tabAssoc);
sort($tabAssoc);
show($tabAssoc);

//nierosnąco w tab assoc

arsort($tabAssoc);
Show($tabAssoc);

//niemalejąco wg nazwy klucza

ksort($tabAssoc);
Show($tabAssoc);

//nierosnąco wg nazwy klucza

krsort($tabAssoc);
show($tabAssoc);

//wyświetlanie danych

var_dump($tabAssoc)

?>

</body>
</html>