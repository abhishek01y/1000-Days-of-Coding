<?php

if(isset($_POST['submit']))
{
    $name = $_POST['name'];
    $email = $_POST['email'];
    $role = $_POST['role'];

    if(empty($name) || empty($email) || empty($role))
    {
        echo "<h3>Please fill all fields</h3>";
    }
    else
    {
        $user = [
            "Name" => $name,
            "Email" => $email,
            "Role" => $role
        ];

        echo "<h2>Registration Details</h2>";

        echo "<table >";

        foreach($user as $key => $value)
        {
            echo "<tr>";
            echo "<td>$key</td>";
            echo "<td>$value</td>";
            echo "</tr>";
        }

        echo "</table>";
    }
}

?>

<!DOCTYPE html>
<html>
<body>

<h2>Registration Form</h2>

<form method="POST">

Name:
<input type="text" name="name">

<br><br>

Email:
<input type="email" name="email">

<br><br>

Role:
<input type="text" name="role">

<br><br>

<input type="submit" name="submit">

</form>

</body>
</html>