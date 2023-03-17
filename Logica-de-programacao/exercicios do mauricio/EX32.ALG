Algoritmo "ex32"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : ler 10 números, calcular média e soma dos positivos
// Autor(a)    : Maurício
// Data atual  : 17/11/2022
Var
// Seção de Declarações das variáveis 
   num, ix, soma, cont : inteiro
   media               : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início do PRG ...")
   soma  <- 0
   cont  <- 0
   media <- 0
   para ix de 1 ate 10 faca
      escreva("Digite um número: ")
      leia(num)
      se (num >= 0) entao
         soma <- soma + num
         cont <- cont + 1
      fimse
   fimpara
   
   media <- soma / cont
   escreval("... Resultados ...")
   escreval("Soma  : ", soma)
   escreval("Média : ", media)

Fimalgoritmo