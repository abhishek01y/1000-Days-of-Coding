<!DOCTYPE html>
<html>
<head>
    <title>Form Test</title>
</head>
<body>

<h2>Enter Your Name</h2>

<form method="POST">
    <input type="text" name="username" placeholder="Enter Name" required>
    <input type="submit" value="Submit">
</form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST["username"];
    echo "<h3>Welcome " . $name . "</h3>";
}
?>

</body>
</html>
