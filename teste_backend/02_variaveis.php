<!DOCTYPE HTML>
<html lang="pt-BR">
    <head>
        <meta charset="utf-8">
        <title>PHP - Variáveis (02)</title>
    </head>
    <body>
        <?php
            echo "Exemplos de Variáveis! <br />";
            // declaração de variáveis simples e operações diversas
            $a = 10;
            $b = 20;
            $c = $a + $b;
            $d = 5.0;
            $e = $c * $d;
            $verdadeiro = true;
            $falso      = false;
            $nome       = 'Carlos';
            $sobrenome  = 'Henriques';
            echo "O valor de a = $a <br />";
            echo "O valor de b = $b <br />";
            echo "O valor de c = $c <br />";
            echo "O valor de d = $d <br />";
            echo "O valor de e = $e <br />";
            echo "O valor de verdadeiro = $verdadeiro <br />";
            echo "O valor de falso = $falso (nulo)<br />";
            echo "Nome = $nome <br />";
            echo "Sobrenome = $sobrenome<br />";
            echo "Nome Completo = $nome $sobrenome <br />";
            echo "Concatenando Variáveis. <br /> Nome Completo = ".$nome." ".$sobrenome."<br /><br /><hr />";
            // exemplo do uso de aspas simples e duplas
            echo "Exemplo do uso de Aspas Simples e Duplas<br />";
            echo 'O meu nome é $nome. <br />';
            // a saída será "O meu nome é $var."
            echo "Meu nome é $nome.<br />";
            // a saída será "O meu nome é Carlos."
            echo "<br /><br /><hr />";
            // Utilizando uma variável do sistema
            echo "Variáveis do Sistema <br />";
            $data_de_hoje = date("d/m/Y H:i:s",time());
            echo "Data do Servidor: $data_de_hoje<br /><br /><hr />";
            // unset = destrói uma variável
            echo "Criar e Destruir uma variável <br />";
            $a = 'PHP';
            echo "Valor de a = $a";
            unset($a); // destroi a variável $a
            echo "Valor de a = $a<br /><br /><hr />";
            // valor e referência de variáveis
            echo "Apresentação de Valores e Referências de Variáveis <br />";
            $p1 = 'Carlos';
            $p2 = $p1;
            $p1 = 'Henriques';
            echo "Valor de Variáveis <br />";
            echo "Valor de p1 = $p1 <br/>";
            echo "Valor de p2 = $p2 <br/>";
            // Referência de Variável
            $p1 = 'Carlos';
            $p2 = &$p1;
            $p1 = 'Henriques';
            echo "Referência de Variáveis <br />";
            echo "Valor de p1 = $p1 <br/>";
            echo "Valor de p2 = $p2 <br/><br /><hr />";
            // $ - permite utilizar o valor de uma variável para servir como
            // identificador para outra que é criada.
            echo "Utilização do conteúdo de uma variável como nome de outra usando $ <br />";
            $nome = "Carlos";
            $futuro_identificador = "autor";
            $$futuro_identificador = $nome;
            echo "O nome do autor é ";
            echo "$autor <br /><br /><hr />";
            // Variáveis numéricas
            // número decimal
            $l = 6500;
            // um número negativo
            $m = -254;
            // número octal (83 em decimal)
            $n = 0123;
            // número hexadecimal (26 em decimal)
            $o = 0x1A;
            // ponto flutuante
            $p = 1.500;
            // notação científica
            $q = 4e22;
            echo "Apresentação de valores numéricos <br />";
            echo "Número decimal               : $l <br />";
            echo "Número negativo              : $m <br />";
            echo "Numero octal                 : $n <br />";
            echo "Número Hexadecimal           : $o <br />";
            echo "Número de ponto flutuante    : $p <br />";
            echo "Número em notação científica : $q <br /> <br /><hr />";
            // manipulação de variáveis numéricas com operadores básicos
            $r = 50;
            $s = 12.5;
            $t = -10;
            $u = 024; //20 na base decimal
            $v = 0x1E; // 30 na base decimal
            echo "valor de r                            = $r<br />";
            echo "valor de s                            = $s<br />";
            echo "valor de t                            = $t<br />";
            echo "valor de u (octal = 20 decimal)       = $u<br />";
            echo "valor de v (hexadecimal = 30 decimal) = $v<br />";
            $x = $r + $s + $t;
            echo "r + s + t = $x <br />";
            $x = $r + $s * $t;
            echo "r + s * t = $x <br />";
            $x = ($r + $s) * $t;
            echo "(r + s) * t = $x <br />";
            $x = $u + $v - $t;
            echo "u + v - t = $x <br />";
            $x = $r + $s * $t;
            echo "r + s * t = $x <br />";
            $x = ($r + $s) * $t;
            echo "(r + s) * t = $x <br /><br /><hr />";
            // manipulação de variáveis numéricas utilizando operadores de
            // atribuição/incremento
            echo "Exemplo de utilização de operadores de atribuição/incremento<br />";
            $variavel = 4; //Valor da variável é 4
            echo "Variável = $variavel <br />";
            $variavel += 10; //Valor da variável é 14
            echo '$variavel += 10'." = $variavel <br />";
            $variavel -= 3; //Valor da variável é 11
            echo '$variavel -= 3'." = $variavel <br />";
            $variavel *= 10; //Valor da variável é 110
            echo '$variavel *= 10'." = $variavel <br />";
            $variavel /= 2; //Valor da variável é 55
            echo '$variavel /= 2'." = $variavel <br />";
            $variavel %= 10; //Valor da variável é 5
            echo '$variavel %= 10'." = $variavel <br />";
            echo "<br /><br /><hr />";
            // Exemplo de geração de números aleatórios usando a função mt_rand()
            echo "Gerando números aleatórios com mt_rand() <br />";
            echo mt_rand(5, 15);
            // Formatação de números
            echo "<br /><br /><hr />Formatação de números decimais usando number_format()<br />";
            $numero = 9857.41;
            echo "Número sem formatação: $numero <br />";
            // Notação Brasileira
            $numero_formatado = number_format($numero, 2, ',', '.');
            // 9.857,41
            echo "Número Formatado nos padrões brasileiros: $numero_formatado<br/><br /><hr />";
            // funções de manipulação de strings
            echo "Funções de manipulação de strings <br />";
            $string = 'Programação para Web <br />';
            echo "String original: $string<br/>";
            // indica o tamanho da string.
            echo 'Tamanho: '.strlen($string),'<br/>';
            // mostra a string em caixa alta
            echo 'Caixa Alta : '.strtoupper($string),'<br/>';
            // mostra a string em caixa baixa
            echo 'Caixa Baixa: '.strtolower($string),'<br/>';
            // preenche a string até um tamanho total com o caracter especificado.
            echo "Número sem preenchimento      : 57 <br />";
            echo 'Número (preenchido à esquerda): '.str_pad('57',6,'0',STR_PAD_LEFT)."<br />";
            echo 'Número (preenchido à direita) : '.str_pad('57',6,'0',STR_PAD_RIGHT)."<br />";
            echo "<br /><br /><hr />";
            // utilização da função trim (elimina caracteres)
            echo("Exemplo de Utilização da Função trim() <br />");
            $vt1 = "  Olá Mundo!  ";
            $vt2 = trim($vt1);
            $vt3 = strlen($vt1);
            $vt4 = strlen($vt2);
            $vt5 = strlen($vt1.$vt2);
            echo "A variável vt1 ($vt1) possui $vt3 caracteres <br />";
            echo "A variável vt2 ($vt2) possui $vt4 caracteres <br />";
            echo "A soma do número de caracteres de vt1 + vt2 = $vt5<br />";
            echo "<br /><br /><hr />";
            // utilização da função substr
            echo "Exemplo de utilização da função substr()<br />";
            $eu = "Mariana";
            $eu1 = substr($eu,0,3);
            $eu2 = substr($eu,3,2);
            $eu3 = substr($eu,5,1);
            $eu4 = substr($eu,6,1);
            echo "String original = $eu <br />";
            echo "Primeira substring = $eu1 <br />";
            echo "Segunda substring  = $eu2 <br />";
            echo "Terceira substring = $eu3 <br />";
            echo "Quarta substring   = $eu4 <br />";
            echo "<br /><br /><hr />";
            //função explode() em php
            echo "Exemplo da utilização da função explode()<br />";
            $nome_arquivo = "texto.txt";
            $arquivo = explode('.', $nome_arquivo);
            echo "Nome completo do arquivo = $nome_arquivo <br />";
            echo "O nome do arquivo é " . $arquivo[0] . "<BR>";
            echo " e sua extensão é " . $arquivo[1] . "<BR>";
            echo "<br /><br /><hr />";
        ?>
    </body>
</html>
