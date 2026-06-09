<?php
if(isset($_POST['submit']))
{
    $name = $_POST['name'];
    $email = $_POST['email'];
    $role = $_POST['role'];

    if(
        empty($name) ||
        empty($email) ||
        empty($role)
    )
    {
        echo "Please fill all fields";
    }
    else
    {
        echo "Registration Successful";
    }
}
?>
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