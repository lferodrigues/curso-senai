<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Operadores (06)</title>
    </head>
    <body>
        <?php
            // igual
            echo "<h1>Operadores de Comparação</h1><br />";
            echo "(7 == 7) ";
            var_dump( 7 == 7 ); // TRUE, são iguais
            echo "<br />";
            var_dump( 7 == 6 ); // FALSE, são diferentes
            echo "<br />";
            // diferente
            var_dump( 7 != 7 ); // FALSE, pois não são diferentes
            echo "<br />";
            var_dump( 7 != 6 ); // TRUE, pois são diferentes
            echo "<br />";
            // Segundo operador diferente
            var_dump( 7 <> 7 ); // FALSE, pois não são diferentes
            echo "<br />";
            var_dump( 7 <> 6 ); // TRUE, pois são diferentes
            echo "<br />";
            //  Idêntico
            var_dump( 7 === 7 ); // TRUE, pois são iguais e do mesmo tipo, inteiros
            echo "<br />";
            var_dump( 7 === 7.0 ); // FALSE, pois não são do mesmo tipo
            echo "<br />";
            // Não idêntico
            var_dump( 7 !== 7 ); // FALSE, pois são iguais e do mesmo tipo, inteiros
            echo "<br />";
            var_dump( 7 !== 7.0 ); // TRUE, pois não são do mesmo tipo
            echo "<br />";
            // Menor que
            var_dump( 7 < 8 ); // TRUE, 7 é menor que 8
            echo "<br />";
            var_dump( 7 < 6 ); // FALSE, 7 não é menor que 6
            echo "<br />";
            // Maior que
            var_dump( 7 > 6 ); // TRUE, 7 é maior que 6
            echo "<br />";
            var_dump( 7 > 8 ); // FALSE, 7 não é maior que 8
            echo "<br />";
            // Menor ou igual
            var_dump( 7 <= 7 ); // TRUE, 7 é igual a 7
            echo "<br />";
            var_dump( 7 <= 6 ); // FALSE, 7 não é menor nem igual a 6
            echo "<br />";
            var_dump( 3 <= 7 ); // TRUE, 3 é menor que 7
            echo "<br />";
            // Maior igual
            var_dump( 7 >= 7 ); // TRUE, 7 é igual a 7
            echo "<br />";
            var_dump( 7 >= 8 ); // FALSE, 7 não é maior nem igual a 8
            echo "<br />";
            var_dump( 10 >= 7 ); // TRUE, 10 é maior que 7
            echo "<br />";
            echo "<br /><hr />";
            echo "<H1>Operadores Lógicos</H1><br />";
            // AND
            var_dump(  7 == 7  AND 9 > 7  ); // TRUE, ambas as expressões são verdadeiras
            echo "<br />";
            var_dump(  7 == 7  AND 9 < 7  ); // FALSE, apenas a primeira expressão é verdadeira
            echo "<br />";
            // OR
            var_dump(  7 == 7  OR 9 > 7  ); // TRUE, ambas as expressões são verdadeiras
            echo "<br />";
            var_dump(  7 != 7  OR 9 > 7  ); // TRUE, a segunda expressão é verdadeira
            echo "<br />";
            var_dump(  7 != 7  OR 9 < 7  ); // FALSE, ambas as expressões são falsas
            echo "<br />";
            // XOR
            var_dump(  7 == 7  XOR 9 > 7  ); // FALSE, ambas as expressões são verdadeiras
            echo "<br />";
            var_dump(  7 == 7  XOR 9 < 7  ); // TRUE, a primeira expressão é verdadeira
            echo "<br />";
            var_dump(  7 < 7  XOR 9 > 7  ); // TRUE, a segunda expressão é verdadeira
            echo "<br />";
            // ! NEGAÇÃO
            var_dump(  ! 9 < 7  ); // TRUE, 9 NÃO é menor que 7
            echo "<br />";
            var_dump(  ! 9 > 7  ); // FALSE, 9 é maior que 7
            echo "<br />";
            // &
            var_dump(  7 == 7  && 9 > 7  ); // TRUE, ambas as expressões são verdadeiras
            echo "<br />";
            var_dump(  7 == 7  && 9 < 7  ); // FALSE, apenas a primeira expressão é verdadeira
            // ||
            var_dump(  7 == 7  || 9 > 7  ); // TRUE, ambas as expressões são verdadeiras
            echo "<br />";
            var_dump(  7 != 7  || 9 > 7  ); // TRUE, a segunda expressão é verdadeira
            echo "<br />";
            var_dump(  7 != 7  || 9 < 7  ); // FALSE, ambas as expressões são falsas
            echo "<br />";
        ?>
    </body>
</html>
