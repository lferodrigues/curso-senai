Algoritmo "ex30"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Ler 5 números, calcular soma, média, menor e maior
// Autor(a)    : Maurício
// Data atual  : 09/11/2022
Var
// Seção de Declarações das variáveis 
  num, soma, menor, maior, ix : inteiro
  media                       : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início do PRG ...")
   ix    <- 1
   media <- 0
   soma  <- 0
   menor <- 0
   maior <- 0
   enquanto (ix <= 5) faca
      escreva("Digite um número: ")
      leia(num)
      // menor
      se (num < menor) ou (ix = 1) entao
         menor <- num
      fimse
      // maior
      se (num > maior) ou (ix = 1) entao
         maior <- num
      fimse

      soma <- soma + num
      ix <- ix + 1
   fimenquanto
   media <- soma / (ix - 1)
   escreval("... Resultados ...")
   escreval("Soma  : ", soma)
   escreval("Média : ", media)
   escreval("Menor : ", menor)
   escreval("maior : ", maior)

Fimalgoritmo