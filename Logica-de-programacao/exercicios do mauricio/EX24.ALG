Algoritmo "ex24"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   :
// 24 - Construa um algoritmo que receba dois números e mostre
// quando o primeiro for maior e quando for menor que o segundo.
// Autor(a)    : Maurício
// Data atual  : 03/11/2022
Var
// Seção de Declarações das variáveis 
   n1, n2 : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   // entrada
   escreval("... INÍCIO DE PRG ...")
   escreva("Digite n1: ")
   leia(n1)
   escreva("Digite n2: ")
   leia(n2)
   
   // processamento
   // saída
   se (n1 <> n2) entao
      se (n1 < n2) entao
         escreval("n1 é menor do que n2")
      senao
         escreval("n1 é maior do que n2")
      fimse
   senao
      escreval("n1 é igual a n2")
   fimse
Fimalgoritmo