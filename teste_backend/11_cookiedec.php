<?php
        // Verifica se existe o cookie
        if(isset($_COOKIE["count"])) {
            // Em caso afirmativo cria uma variável, incrementa a variável e atualiza
            // o cookie
            $count = $_COOKIE["count"];
            $count--;
            setcookie("count", $count, time()+3600);
        }
?>
<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Cookies - Incluir (11)</title>
    </head>
    <body>
        <h1>Contador de Cookies decrementado. Valor atualizado <?php echo "$count" ?></h1>
        <ul>
            <li>Clique aqui <a href="11_cookiesi.php">incrementar o contador</a></li>
            <li>Clique aqui <a href="11_cookiedec.php">decrementar o contador</a></li>
            <li>Clique aqui <a href="11_cookiesd.php">para destruir o cookie</a></li>
            <li>Clique aqui <a href="11_cookies.php">para voltar à página inicial</a></li>
        </ul>
    </body>
</html>
