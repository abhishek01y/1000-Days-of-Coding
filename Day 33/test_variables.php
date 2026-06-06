<?php

$name = "Abhishek";

$age = 20;

$cgpa = 7.91;

$isStudent = true;

$skills = array("PHP", "MySQL", "HTML");


class Student {
    public $college = "Chandigarh University";
}

$student = new Student();

echo "<h2>PHP Data Types</h2>";

echo "String: " . $name . "<br>";
echo "Integer: " . $age . "<br>";
echo "Float: " . $cgpa . "<br>";
echo "Boolean: " . ($isStudent ? "True" : "False") . "<br>";

echo "<br><b>Array:</b><br>";
print_r($skills);

echo "<br><br><b>Object:</b><br>";
print_r($student);

?>
