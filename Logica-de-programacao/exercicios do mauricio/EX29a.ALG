Algoritmo "ex29"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Lê 8 números calcula soma e média (para...faça)
// Autor(a)    : Maurício
// Data atual  : 08/11/2022
Var
// Seção de Declarações das variáveis 
   num, ix, soma : inteiro
   media         : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início do PRG ...")
   soma  <- 0
   media <- 0
   para ix de 1 ate 8 faca
      escreva("[",ix,"] - Digite um número: ")
      leia(num)
      soma <- soma + num
   fimpara
   media <- soma / ix
   escreval("... Resultados ...")
   escreval("Soma  : ",soma)
   escreval("Média : ",media)
   escreval("Qtde. : ",ix)

Fimalgoritmo