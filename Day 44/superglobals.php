<?php
//GET
echo $_GET["name"];
echo "<br>";
echo $_GET["age"];
?>
<br>
<!-- POST -->
<form method="POST">
<input type = "Text"  name = "name" placeholder="Enter your name">
<input type = "Text" name = "age" placeholder="Enter your age">
<input type = "submit">
</form>
<?php
if(isset($_POST["name"])){
    echo "Welcome" . $_POST["name"];
    echo "<br>";
}
    ?>

    <form method="POST">

<input type="text" name="name">

<input type="submit">

</form>

<?php

if(isset($_POST["name"]))
{
    if(empty($_POST["name"]))
    {
        echo "Please enter your name";
    }
    else
    {
        echo "Welcome " . $_POST["name"];
    }
}

?>


<?php 
session_start();
$_SESSION[name] ="Abhishek";
echo "Session started";
echo "<br>";
echo $_SESSION[name];
?>