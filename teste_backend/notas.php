<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Notas - PHP</title>
    <style>
        body{
            padding: 15px;
            background-color: #FFFAF0;
            font-family: 'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif;
            color: #2F4F4F;
            text-align: center;
        }
        img {
            margin: auto;
            display: block;
        }
    </style>
</head>
<body>
    <h1>Cálculo de Soma, Média e Status de Notas do Aluno (PHP)</h1>
    <img src="php.png" alt="PHP">
    <br>
    <?php
        // criação de vetor para armazenamento de notas e das variáveis
        $notas = array(8,9.5,7,6.5);
        $soma  = 0.0;
        $media = 0.0;

        // leitura do vetor e cálculo da soma
        echo "<hr><h4>Notas</h4>";
        foreach($notas as $calculo){
            echo number_format($calculo, 2, ',', '.')." <br>";
            $soma += $calculo;
        }
        echo "<br>";
        // cálculo da média
        $media = $soma / 4;

        // apresentação da média
        echo "<hr><br>Média = <strong>".number_format($media, 2, ',', '.')."</strong> <br>";

        // definição do status do aluno
        if($media < 4.0){
            echo "Aluno Reprovado <br>";
        } elseif($media < 7.0){
            echo "Aluno em Recuperação <br>";
        } else {
            echo "Aluno Aprovado <br>";
        }
    ?>
</body>
</html>