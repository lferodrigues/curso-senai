<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Funções (08)</title>
    </head>
    <body>
        <?php
            // constante - valor de PI
            define('PI_A',3.1416);

            // variáveis
            $a = 5;
            $b = 10;

            // função com passagem de argumentos parametrizados
            echo "<h1>Exemplos de funções</h1><br /><hr />";
            echo "Função: function somarV(v1,v2)<br />";
            function somarV($x,$y){
                $ret = $x + $y;
                return $ret;
            }
            $c = somarV($a,$b);
            echo "Soma de $a + $b = $c <br />";
            echo "<br /><hr />";

            // função com parâmetros diretos
            echo "Função: function somarN(n1,n2)<br />";
            function somarN($x,$y){
                $ret = $y + $x;
                return $ret;
            }
            $c = somarN(30,50);
            echo "Soma de 30 + 50 = $c <br />";
            echo "<br /><hr />";

            // função sem retorno (procedimento)
            echo "Função sem retorno: function somarS(v1,v2)<br />";
            function somarS($x,$y){
                $res = $x + $y;
                echo "Impresso dentro da função!!! <br />";
                echo "Soma de $x + $y = $res <br />";
            }
            somarS(12,13);
            echo "<br /><hr />";

            // função com mais de um retorno
            echo "Função mais de um retorno: function circ(v1)<br />";
            $raio = 5;
            function circ($x){
                $comp = 2 * PI_A * $x;
                $area = PI_A * ($x * $x);
                return  array($comp, $area);
            }
            $res = circ($raio);
            echo "Raio = $raio<br />";
            echo "Comprimento da Circunferência: $res[0]<br />";
            echo "Área da Circunferência       : $res[1]<br />";
            echo "<br /><hr />";

            // função com passagem de argumento por referência
            echo 'Função com argumento por referência: function param($v1,&$v2)<br />';
            $v1 = 10;
            $v2 = 10;
            function param($v1,&$v2) {
                $v1 = $v1 * 5;
                $v2 = $v2 * 2;
                return array($v1,$v2);
            }
            echo "Valores antes da função: <br />";
            echo '$v1 = '.$v1."<br />";
            echo '$v2 = '.$v2."<br />";
            $resultado = param($v1,$v2);
            echo "Valores depois da função: <br />";
            echo '$v1 = '.$v1."<br />";
            echo '$v2 = '.$v2."<br />";
            echo "Valores retornados pela função no array resultado:<br />";
            echo '$resultado[0] = '.$resultado[0]."<br />";
            echo '$resultado[1] = '.$resultado[1]."<br />";
            echo "<br /><hr />";
      ?>
    </body>
</html>
