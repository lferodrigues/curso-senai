<?php
    session_start();
    if($_SESSION['nome']=='') {
        header("Location: 12_sessoes.php");
        exit;
    }
    session_destroy();
?>

<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
      <meta charset="utf-8">
      <title>PHP - Sessões - Página 3(12)</title>
  </head>
  <body>
    <h1>Página 3</h1>
    <p>
        Sessão destruída com sucesso!
    </p>
    <table>
        <tr>
            <td align="right" colspan="2">
            <hr/>
            <input type="button" name="Voltar" value="Voltar" onClick=top.window.location="12_sessoes.php"; />
        </tr>
    </table>
  </body>
</html>
