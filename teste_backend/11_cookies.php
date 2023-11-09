<?php
    $count = 0;
    setcookie("count", $count, time()+3600);
?>
<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Cookies (11)</title>
    </head>
    <body>
        <h1>Contador de Cookies inicializado com <?php echo "$count"  ?></h1>
        <ul>
            <li>Clique aqui <a href="11_cookiesi.php">incrementar o contador</a></li>
            <li>Clique aqui <a href="11_cookiesd.php">para destruir o cookie</a></li>
        </ul>
    </body>
</html>
