<?php
        $msg = "";
        // Verifica se existe o cookie
        if(isset($_COOKIE["count"])) {
            // ajustado para expirar em uma hora:
            // cálculo 60 segundos * 60 minutos = 3600
            setcookie("count", "", time() - 3600);
            $msg = "Cookie deletado com sucesso!!!!";
        } else {
            $msg = "Cookie não encontrado!!!!";
        }
?>
<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Cookies - Deletar (11)</title>
    </head>
    <body>
        <h1><?php echo "$msg";?></h1>
        <ul>
            <li>Clique aqui <a href="11_cookies.php">para voltar à página inicial</a></li>
        </ul>
    </body>
</html>

