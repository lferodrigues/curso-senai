Algoritmo "ex28"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Cálculo do salário a receber
// Autor(a)    : Maurício
// Data atual  : 07/11/2022
Var
// Seção de Declarações das variáveis 
   nome : caracter
   salB, inss, ir, salL : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

   // entrada
   escreval("... Início de PRG ... ")
   escreva("Digite o nome do Funcionário: ")
   leia(nome)
   escreva("Informe o salário do Funcionário: ")
   leia(salB)
   
   // processamento
   se (salB <= 500) entao
      inss <- salB * 0.03
      ir   <- salB * 0.02
   senao
      se (salB <= 950) entao
         inss <- salB * 0.05
         ir   <- salB * 0.04
      senao
           inss <- salB * 0.07
           ir   <- salB * 0.06
      fimse
   fimse
   salL <- salB - inss - ir
   // saída
   escreval("..... RESULTADOS .....")
   escreval("Nome do Funcionário: ", nome)
   escreval("INSS...............: ", inss)
   escreval("IR.................: ", ir)
   escreval("(=) Salário Líquido: ", salL)

Fimalgoritmo