<?php
    session_start();
    if($_POST['nome']=='') {
        header("Location: 12_sessoes.php");
        exit;
    }
    $_SESSION['nome']  = $_POST['nome'];
    $_SESSION['email'] = $_POST['email'];
    $_SESSION['obs']   = $_POST['obs'];
?>
<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
      <title>PHP - Sessões - Página 1 (12)</title>
  </head>
  <body>
    <h1>Sessões - Página 1</h1>
    <p>
        Olá <b><?=$_SESSION['nome']?></b>. Bem-vindo(a) a este site.
        Preencha mais estes campos.
    </p>
    <form method="post" action="12_sessoes2.php">
        <table border="0" cellpadding="0" cellspacing="5">
            <tr>
                <td align="right">Profissão</td>
                <td><input name="profissao" type="text" size="25" /></td>
            </tr>
            <tr>
                <td align="right">Cidade</td>
                <td><input name="cidade" type="text" size="25" /></td>
            </tr>
            <tr>
                <td align="right" colspan="2">
                <hr noshade="noshade" />
                <input type="button" name="Voltar" value="Voltar" onClick=top.window.location="12_sessoes.php"; />
                <input type="reset"  name="Limpar" value="Limpar" />
                <input type="submit" name="Ok" value=" Ok "    />
                </td>
            </tr>
        </table>
    </form>
    </body>
</html>
