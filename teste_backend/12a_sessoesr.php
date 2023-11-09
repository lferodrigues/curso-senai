<?php
  //Inicia a sessão
  session_start();
  $validacao = $_SESSION['validacao'];
  $usuario   = $_SESSION['usuario'];
  //agora verifico se ele possui permissão para acessar a página
  if ($validacao == "1")
  {
?>
    <html>
        <head>
        <title>Página restrita</title>
    </head>
        <body>
            Seja bem vindo(a) <b><?php echo $usuario; ?></b> à Página restrita
            <a href="12a_sessoesd.php">  >>> Fazer Logout <<<</a>
        </body>
    </html>
<?php
    }
    else
    {
      //exiba um alerta dizendo que a senha está errada
      echo "<a href=12a_sessoesn.php>VOLTAR</a>";
    }
?>
