<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
      <title>PHP - Sessões - Página inicial (12)</title>
  </head>
  <body>
    <h1>Sessões - Página Inicial</h1>
    <h2>Preencha o formulário</h2>
    <p><font color="orangered" size="+1"><tt><b>*</b></tt></font>
    indica campo obrigatório</p>
    <form method="post" action="12_sessoes1.php">
        <table border="0" cellpadding="0" cellspacing="5">
            <tr>
                <td align="right">Nome</td>
                <td><input name="nome" type="text" size="25" />
                <font color="orangered"    size="+1"><tt><b>*</b></tt></font>
                </td>
            </tr>
            <tr>
                <td align="right">E-Mail</td>
                <td><input name="email" type="text" size="25" /></td>
            </tr>
            <tr valign="top">
                <td align="right">Observações</td>
                <td>
                <textarea wrap="soft" name="obs" rows="5" cols="30">Entre com as informações</textarea>
                </td>
            </tr>
            <tr>
                <td align="right" colspan="2">
                <hr noshade="noshade" />
                <input type="reset" name="Limpar" value="Limpar" />
                <input type="submit" name="Ok" value="Ok"    />
                </td>
            </tr>
        </table>
    </form>
    </body>
</html>
