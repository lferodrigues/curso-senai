Algoritmo "ex31"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi - teste 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/11/2022
Var
// Seção de Declarações das variáveis
   idade, soma, menor, maior, ix, mediaI : inteiro
   media : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início de PRG ...")
   ix <- 1
   soma  <- 0
   media <- 0
   menor <- 0
   maior <- 0
   repita
     escreva("Digite a idade: ")
     leia(idade)
     soma <- soma + idade
     // menor
     se (idade < menor) ou (ix = 1) entao
       menor <- idade
     fimse
     // maior
     se (idade > maior) ou (ix = 1) entao
        maior <- idade
     fimse
     ix <- ix + 1
   ate (ix > 6)
   media  <- soma / (ix - 1)
   mediaI <- soma \ (ix - 1)
   escreval("... Resultados ...")
   escreval("Soma  : ", soma)
   escreval("Média : ", media, " sem arredondamento")
   escreval("Média : ", mediaI, " COM arredondamento")
   escreval("Menor : ", menor)
   escreval("Maior : ", maior)

Fimalgoritmo