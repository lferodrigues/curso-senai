<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Arrays (05a)</title>
        <style>
            table {
                border-collapse: collapse;
                border: 1px solid #000;
                width: 60;
                text-align: center;
                background-color: #CCC;
            }
            th, td {
                padding: 8px;
            }
            tr:hover{background-color:#f5f5f5}
        </style>
    </head>
    <body>
        <?php
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

            //print_r($lista_compras2);
            //echo "<br /><hr />";
        ?>
        <!-- Integração do PHP com HTML -->
        <table border="1px">
            <tr>
                <th>Item</th>
                <th>Mercado1</th>
                <th>Mercado2</th>
            </tr>
            <tr>
                <td><?php echo $lista_compras2[1]['item']; ?></td>
                <td><?php echo $lista_compras2[1]['mercado1']; ?></td>
                <td><?php echo $lista_compras2[1]['mercado2']; ?></td>
            </tr>
            <tr>
                <td><?php echo $lista_compras2[2]['item']; ?></td>
                <td><?php echo $lista_compras2[2]['mercado1']; ?></td>
                <td><?php echo $lista_compras2[2]['mercado2']; ?></td>
            </tr>
            <tr>
                <td><?php echo $lista_compras2[3]['item']; ?></td>
                <td><?php echo $lista_compras2[3]['mercado1']; ?></td>
                <td><?php echo $lista_compras2[3]['mercado2']; ?></td>
            </tr>
        </table>
    </body>
</html>
