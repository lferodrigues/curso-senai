Algoritmo "ex26"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : ler 3 números indicar o maior e a ordem de digitação
// Autor(a)    : Maurício
// Data atual  : 03/11/2022
Var
// Seção de Declarações das variáveis 
  n1, n2, n3 : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   // entrada
   escreval("... Início do Prg ...")
   escreva("Digite n1: ")
   leia(n1)
   escreva("Digite n2: ")
   leia(n2)
   escreva("Digite n3: ")
   leia(n3)
   
   // processamento
   // saída
   se (n1 > n2) e (n1 > n3) entao
      escreval("O primeiro foi o maior: ",n1)
   senao
      se (n2 > n3) entao
         escreval("O segundo foi o maior: ",n2)
      senao
         escreval("O terceiro foi o maior: ",n3)
      fimse
   fimse

Fimalgoritmo