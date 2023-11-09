<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Primeira Página em PHP</title>
</head>
<body>
    <?php
        echo "Olá Mundo!";
        /*
        comentário de 
        várias linhas
        */
        echo "<br>Comentário de várias linhas <br>";
        // comentário de uma linha
        echo "Comentário de uma linha <br>";
        # comentário de uma linha usando #
        echo "Comentário de uma linha utilizando #<br>";

        echo "<br><hr><h1>Variáveis</h1>";
        $a = "Ola";
        echo $a . " Mundo! (concatenação) <br>";
        $b = "Técnico ";
        $c = "em Informática ";
        $d = "Para Internet <br>";

        echo "$b $c $d";

        print '<br>Comando print <br>';
        print('<br>Comando print()<br>');

        echo "Variável $a utilizando aspas dupas<br>";
        echo 'Variável $a utilizando aspas simples<br>';
        echo 'A variável $a = '."[$a] utilizando aspas simples e duplas<br>";

        echo "<br><hr><h1>Constantes</h1>";
        define('PI_A',3.1416);
        define('FORMULA',"Área da Circunferência");
        $r  = 25;
        $a  = PI_A * ($r * $r);
        $af = number_format($a,2,',','.');
        echo FORMULA." = $a <br>";
        echo FORMULA." = $af <b>(formatado)</b><br>";

        echo "Valor definido para PI = ".PI_A."<br>";
        echo "Valor definido para PI = ".number_format(PI_A,15,',','.')." <b>(formatado)</b><br>";
    ?>
</body>
</html>