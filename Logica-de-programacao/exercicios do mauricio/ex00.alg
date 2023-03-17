Algoritmo "ex00"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Calcular média de duas notas e apresentar status
// Regras      : 0 < 4 : reprovado
//               4 < 7 : recuperação
//               >= 7  : aprovado
// Autor(a)    : Maurício
// Data atual  : 03/11/2022
Var
// Seção de Declarações das variáveis 
   n1, n2, m : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   // entrada
   escreval("Hello World!!!!")
   escreva("Digite a primeira nota: ")
   leia(n1)
   escreva("Digite a segunda nota : ")
   leia(n2)
   // processamento
   m <- (n1 + n2) / 2
   
   // saída
   se (m < 4) entao
      escreva("Reprovado. Média = ", m)
   senao
      se (m < 7) entao
         escreva("Recuperação. Média = ", m)
      senao
         escreva("Aprovado. Média = ", m)
      fimse
   fimse

Fimalgoritmo