<?php
    session_start();
    if($_SESSION['nome']=='') {
        header("Location: 12_sessoes.php");
        exit;
    }
    $_SESSION['profissao'] = $_POST['profissao'];
    $_SESSION['cidade']    = $_POST['cidade'];
?>
<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
      <title>PHP - Sessões - Página 3 (12)</title>
  </head>
  <body>
        <h1>Página 2</h1>
        <p>
            Olá <b><?=$_SESSION['nome']?></b>.
            Aqui estão os seus dados:
        </p>
        <table>
            <tr>
                <td align="right">Nome:</td><td><?=$_SESSION['nome']?></td>
            </tr>
            <tr>
                <td    align="right">Email:</td><td><?=$_SESSION['email']?></td>
            </tr>
            <tr>
                <td    align="right">Profissao:</td><td><?=$_SESSION['profissao']?></td>
            </tr>
            <tr>
                <td    align="right">Cidade:</td><td><?=$_SESSION['cidade']?></td>
            </tr>
            <tr>
                <td    align="right">Observações:</td>
                <td><?=$_SESSION['obs']?></td>
            </tr>
            <tr>
                <td align="right" colspan="2">
                <hr noshade="noshade" />
                <input type="button" name="Voltar" value="Voltar" onClick=top.window.location="12_sessoes.php"; />
                </td>
            </tr>
        </table>
        <p>
            Session_ID: <?=session_id()?><br />
            Clica aqui para <a href="12_sessoes3.php">destruir a sessão</a>.
        </p>
  </body>
</html>
