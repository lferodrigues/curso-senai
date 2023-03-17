Algoritmo "desconto"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Ler conjuntos de informações e calcular valores
// Autor(a)    : Maurício
// Data atual  : 21/11/2022
Var
// Seção de Declarações das variáveis 
  cod, qtde, ix, qT : inteiro
  tam : caracter
  vU, vB, desc, vL, dT : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   qT <- 0
   vB <- 0
   desc <- 0
   dT <- 0
   
   escreval("... Início do PRG ...")

   para ix de 1 ate 5 faca
      escreva("Digite o código: ")
      leia(cod)
      escreva("Digite a quantidade: ")
      leia(qtde)
      repita
         escreva("Digite o Tamanho [P/M/G]: ")
         leia(tam)
      ate ((tam = "P") ou (tam = "p") ou (tam = "M") ou (tam = "m") ou (tam = "G") ou (tam = "g"))
      escreva("Digite o valor unitário: ")
      leia(vU)
      escreval("----------------")
      
      // sessão de cálculos
      qT <- qT + qtde
      vB <- vB + (vU * qtde)
      se (tam = "P") ou (tam = "p") entao
         // desc <- desc + (vU * 0.2 * qtde)
         desc <- (vU * 0.2 * qtde)
      senao
         se (tam = "M") ou (tam = "m") entao
           desc <- (vU * 0.15 * qtde)
         senao
            se (tam = "G") ou (tam = "g") entao
               desc <- (vU * 0.1 * qtde)
            senao
               escreval("Tamanho inválido. Desconto = 0")
               desc <- 0
            fimse
         fimse
      fimse
      dT <- dT + desc
   fimpara
   
   vL <- vB - dT
   escreval("... Resultados ...")
   escreval("Quantidade Total...: ", qT)
   escreval("Valor Bruto........: ", vB)
   escreval("Desconto Total.....: ", dT)
   escreval("Valor líquido total: ", vL)

Fimalgoritmo