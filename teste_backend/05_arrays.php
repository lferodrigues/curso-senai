<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Arrays (05)</title>
    </head>
    <body>
        <?php
            //1ª opção (Numérica)
            echo "Arrays - 1ª opção - acesso numérico <br />";
            //$carros = array('Palio', 'Corsa', 'Gol');
            //echo $carros[1];
            echo "<br /><hr />";
            //2ª opção (Numérica)
            echo "Arrays - 2ª opção - acesso numérico <br />";
 
            $carros[] = 'Palio';
            $carros[] = 'Corsa';
            $carros[] = 'Gol';
            $carros[] = 'Siena';
            //echo $carros[2];
            echo "<br>0 - $carros[0] .. 1 - $carros[1] .. 2 - $carros[2] .. 3 - $carros[3]<br>";
            echo "<br /><hr />";
            // referências alfabéticas
            echo "Arrays - acesso por string <br />";
            $estados = array(
            'PI' => 'Teresina',
            'CE' => 'Fortaleza',
            'MA' => 'São Luís');
            echo "$estados[PI]<br/>";
            echo "{$estados['CE']}<br/>";
            echo "$estados[MA]<br/>";
            echo "<br /><hr />";
            // arrays heterogêneos
            echo "Arrays - heterogêneos <br />";
            $vetor = array (10,50,100,150,200);
            echo "$vetor[2] <br/>";
            $vet = array (1, 2, 3, 'nome'=>'Joaquim');
            echo "$vet[0] <br/>";
            echo $vet['nome'];
            echo "<br /><hr />";

            //Array simples
            echo "<h2>Array simples</h2>";
            $lista_compras[1] = "Pão";
            $lista_compras[2] = "Bife de Hamburguer";
            $lista_compras[3] = "Cheddar";
            $lista_compras[4] = "Bacon";

            $lista_compras1 = array(1 => "Carne", 2 => "Farofa", 3 => "Coca-Cola", 4 => "Suco");
            echo "<br /><hr />";

            //Printando os array's na tela
            echo "O comando echo não consege imprimir o array";
            echo $lista_compras;//não da certo ,não apresenta todo o array so algum específico cujo vc define utilizando o [x].
            echo "<br /><hr />";

            // usando print_r e var_dump()
            echo "Para imprimir o array completo utilizamos o comando print_r() <br />";
            print_r($lista_compras);
            echo "<br /><br />Ou utilizamos o comando var_dump() que inclusive é mais completo. <br />";
            var_dump($lista_compras1);//mais completo pois apresenta mais informações sobre o array
            echo "<br /><hr />";
            echo "var_dump do vetor vet: <br>";
            var_dump($vet);

            //Array Multidimensional
            echo "<h2>Array Multidimensional</h2>";
            $lista_compras2[1]['item'] = "Pão";
            $lista_compras2[2]['item'] = "Bife de Hamburguer";
            $lista_compras2[3]['item'] = "Cheddar";
            $lista_compras2[4]['item'] = "Bacon";

            $lista_compras2[1]['mercado1'] = "3";
            $lista_compras2[2]['mercado1'] = "1";
            $lista_compras2[3]['mercado1'] = "18.5";
            $lista_compras2[4]['mercado1'] = "15.5";

            $lista_compras2[1]["mercado2"] = "3.25";
            $lista_compras2[2]["mercado2"] = "0.8";
            $lista_compras2[3]["mercado2"] = "17.6";
            $lista_compras2[4]["mercado2"] = "15";

            print_r($lista_compras2);
            echo "<br /><hr />";
      ?>
    </body>
</html>
