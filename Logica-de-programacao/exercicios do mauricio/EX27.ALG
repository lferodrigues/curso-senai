Algoritmo "ex27"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   :
// Faça um algoritmo e o diagrama de blocos que receba o código, o
// preço e o tamanho da camiseta. Sabe-se que de acordo com o tamanho
// há um desconto conforme tabela abaixo. Informar o código, e o valor
// do desconto.
//         tamanho "G" - 10%
//         tamanho "M" - 20%
//         tamanho "P" - 30%
// Autor(a)    : Maurício
// Data atual  : 07/11/2022
Var
// Seção de Declarações das variáveis 
  cod         : inteiro
  preco, desc : real
  tam         : caractere
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   // entrada
   escreval("... Início do PRG ...")
   escreva("Digite o código: ")
   leia(cod)
   escreva("Digite o preço: ")
   leia(preco)
   escreva("Digite o Tamanho [P, M, G]: ")
   leia(tam)
   // processamento
   se (tam = "P") ou (tam = "p") entao
      desc <- preco * 0.3
   senao
      se (tam = "M") ou (tam = "m") entao
         desc <- preco * 0.2
      senao
         se (tam = "G") ou (tam = "g") entao
            desc <- preco * 0.1
         senao
            escreval("Tamanho digitado inválido!")
            desc <- 0
         fimse
      fimse
   fimse
   escreval("Código  : ",cod)
   escreval("Desconto: ",desc)
   // saída
Fimalgoritmo