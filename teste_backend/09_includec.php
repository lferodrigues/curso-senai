<?php
    // arquivo principal de conteúdo a ser chamado no site
    include "09_includeh.php"; // arquivo de cabeçalho (header)
    include "09_includefunctions.php"; // arquivo de funções
    $valor = somar(5,8);
    echo "<h1>Este é o Conteúdo Principal</h1>";
    echo "<h3>inserido diretamente através o comando echo do PHP.</h3>";
    echo "Valor da Soma de 5 e 8 = $valor. <br><hr:";
    include "09_includef.php"; // arquivo de rodapé (footer)
?>
