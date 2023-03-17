Algoritmo "tabuada-faca-enquanto"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Tabuada de um número com repetição utilizando
//               enquanto...faça
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
   ix <- 1
   escreval("")
   escreval("Tabuada do número: ",num)
   // repetição
   repita
      escreval(num, " x ",ix," = ", num * ix)
      ix <- ix + 1
    ate (ix > 10)
   escreval("... Fim de PRG ...")

Fimalgoritmo