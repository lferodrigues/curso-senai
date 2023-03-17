Algoritmo "n-fibonacci"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : calcula a Série de Fibonacci até o n-ésimo número
// Autor(a)    : Maurício
// Data atual  : 22/11/2022
Var
// Seção de Declarações das variáveis 
   n1, n2, fib, num, ix : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   n1 <- -1
   n2 <- 1
   ix <- 1
   
   escreval("... PRG - Série de Fibonacci ...")
   escreva("Digite o n-ésimo termo da Série: ")
   leia(num)
   
   enquanto (ix <= num) faca
      fib <- n1 + n2
      n1  <- n2
      n2  <- fib
      se (ix < num) entao
         escreva(fib, " , ")
      senao
         escreva(fib)
      fimse
      ix <- ix + 1
   fimenquanto

Fimalgoritmo