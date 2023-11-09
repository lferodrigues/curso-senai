<?php
  ob_start(); // função que define que os dados devem ser guardados em memória
  $login = 'mauricio'; //armazena o usuário dentro da variável $login
  $senha = 1234; //armazena a senha dentro da variável $senha

  //se o usuário e a senha conferirem com os valores registrados
  if ($login == $_POST['usuario'] && $senha == $_POST['password'])
  //entao execute isto
  {
      //antes de redirecionarmos
      //vamos salvar algumas informações para utilizar depois

      //primeiro a variável $validacao recebe o valor 1
      //usaremos essa variável para verificar se ele está
      // logado, se o usuário não tiver o valor 1 nessa variável ele não está
      // logado!
      $validacao = "1";

      $usuario = $_POST['usuario']; // recebe o nome do usuário digitado no formulario  do 12a_sessoes.php

      //inicio uma Sessão
      session_start();

      //gravo as informações das variáveis dentro das sessões
      $_SESSION['usuario'] = $usuario;
      $_SESSION['validacao'] = $validacao;

      //Pronto agora redirecione o usuário para a página secreta
      //abre a página secreta
      header ("Location: 12a_sessoesr.php");
  }
  else
  {
      //exiba um alerta dizendo que a senha esta errada
      header ("Location: 12a_sessoesn.php");
  }
?>
