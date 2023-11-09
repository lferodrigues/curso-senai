<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Formulários - POST - Pág. processa (10a)</title>
    </head>
    <body>
        Oi <?php echo $_POST["nome"]; ?>.
        Você tem <?php echo $_POST["idade"]; ?> anos.
        <br>
        var_dump($_POST): <?php var_dump($_POST);?>
    </body>
</html>
