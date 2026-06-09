<?php
$age = 20;
if($age >= 18)
{
    echo "Eligible for Voting";
}
?>
<br>
<?php
$age = 16;
if($age >= 18)
{
    echo "Eligible";
}
else
{
    echo "Not Eligible";
}
?>
<?php
$marks = 85;
if($marks >= 90)
{
    echo "Grade A+";
}
elseif($marks >= 75)
{
    echo "Grade A";
}
elseif($marks >= 60)
{
    echo "Grade B";
}
else
{
    echo "Grade C";
}
?>
<?php
// switch case
$day = 2;

switch($day)
{
    case 1:
        echo "Monday";
        break;

    case 2:
        echo "Tuesday";
        break;

    case 3:
        echo "Wednesday";
        break;

    default:
        echo "Invalid";
}

?>
<?php
//for loop
for($i = 1; $i <= 5; $i++)
{
    echo $i . "<br>";
}
?>
<?php
//while loop
$i = 1;
while($i <= 5)
{
    echo $i . "<br>";
    $i++;
}
?>
<br>
<?php 
// for each loop
$fruits = array("Apple","Banana","orange");
foreach($fruits as $fruit){
    echo $fruit . "<br>";
}
?>
<?php 
//array key
$weeks = array("Mon"=> "Monday",
"Tue"=> "Tuesday",
"wed"=> "Wednesday");
foreach($weeks as $key=>$day){
    echo $key . ":" .$day. "<br>";
}
?>
<br>
<?php 
$student= [
    "name" =>"Abhishek",
    "age" => 20,
    "cgpa" => 7.91
];
print_r(array_keys($student));
print_r(array_values($student));
?>

<?php
function add($a,$b){
    return $a+$b;
}