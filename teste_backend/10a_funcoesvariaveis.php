<?php
    $var = '';
    // Será interpretado como TRUE imprimindo o texto.
    if (isset($var)) {
        echo "Essa variável existe.<br>";
    }
    var_dump($var);
    echo "<br>";
    echo "<hr>";

    // No próximo exemplo será usado var_dump para mostrar
    // o valor de retorno de isset().
    $a = "teste";
    $b = "outroteste";
    var_dump( isset($a) );      // TRUE
    echo "<br>";
    var_dump( isset ($a, $b) ); // TRUE
    echo "<br>";
    var_dump($a);
    echo "<br>";
    var_dump($b);
    echo "<br>";
    echo "<hr>";

    // destruirá a variável $a
    unset ($a);
    var_dump( isset ($a) );     // FALSE
    echo "<br>";
    var_dump( isset ($a, $b) ); // FALSE
    echo "<br>";
    var_dump($a);
    echo "<br>";
    var_dump($b);
    echo "<br>";
    echo "<hr>";

    // move o valor  NULL para a variável $var
    $var = NULL;
    var_dump( isset ($var) );   // FALSE
    echo "<br>";
    var_dump($var);
    echo "<br>";
    echo "<hr>";
?>
