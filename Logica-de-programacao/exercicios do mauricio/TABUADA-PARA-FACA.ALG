Algoritmo "tabuada-para-faca"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Tabuada de um número com repetição utilizando
//               para...faça
// Autor(a)    : Maurício
// Data atual  : 08/11/2022
Var
// Seção de Declarações das variáveis
   num, ix : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("... Início do PRG ...")
   escreva("Digite o número para a tabuada: ")
   leia(num)
   escreval("")
   escreval("Tabuada do número: ",num)
   // repetição
   para ix de 1 ate 10 passo 1 faca
     escreval(num, " x ",ix," = ", num * ix)
   fimpara
   escreval("... Fim de PRG ...")

Fimalgoritmo