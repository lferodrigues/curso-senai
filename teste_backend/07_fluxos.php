<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Controle e Repetição (07)</title>
    </head>
    <body>
        <?php
            echo"<h2>Decisão</h2><br />";

            //IF e Else
            echo"<h2>if/elsif/else</h2><br />";
            #Variáveis
            $var1 = 2;
            $var2 = 3;
            if($var1 == $var2){
                echo "$var1 e $var2 são iguais. <br />";
            }elseif ($var1 > $var2){
                echo "$var1 é maior que $var2.<br />";
            } else {
                echo "$var1 é menor que $var2.<br />";
            }
            echo "<hr />";

            echo"<h2>if/elsif/else (<strong>Alternativa</strong>)</h2><br />";
            $a = 6;
            if ($a == 5):
                echo "a igual a 5";
                echo "...";
            elseif ($a == 6):
                echo "a igual a 6";
                echo "!!!";
            else:
                echo "a não é nem 5 nem 6";
            endif;

            //Switch Case
            echo"<h2>switch .. case</h2><br />";
            //Variáveis
            $var3 = 2;
            switch ($var3) {
                case 4:
                    echo "Escolha pelo case 4";
                    break;
                case 5:
                    echo "Escolha pelo case 5";
                    break;
                default:
                    echo "Escolha pelo case default";
                    break;
            }

            echo"<h2>Repetição</h2><br />";

            //While
            echo"<h2>while ... do</h2><br />";
            #Variável
            $num = 1;
            while ($num <=10) {
                echo "Passagem ".$num;
                echo "<br />";
                $num = $num+1;
            }
            echo'<hr />';

            //Do while
            echo"<h2>do ... while</h2><br />";
            #Variáveis
            $num1 = 1;
            do {
                echo "Passagem".$num1;
                echo "<br />";
                $num1 ++;
            } while ( $num1<= 10);
            echo'<hr />';

            //For
            echo"<h2>for</h2><br />";
            for ($i=1; $i <= 10 ; $i++) {
                # code...
                echo "Passagem".$i."<br />";
            }

            //Foreach
            echo"<h2>foreach</h2><br />";
            $nomes = array('João', 'Maria', 'José', 'Joana');
            foreach ($nomes as $indice => $valor) {
                echo $indice . " - ";
                echo $valor . "<br />";
            }
      ?>
    </body>
</html>
