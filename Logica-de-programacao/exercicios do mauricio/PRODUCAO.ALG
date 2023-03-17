Algoritmo "producao"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Programa de Cálculo de valores de Produção
// Autor(a)    : Maurício
// Data atual  : 21/11/2022
Var
// Seção de Declarações das variáveis 
   os, qtde, tip, ix, qT : inteiro
   vT, premio : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   ix     <- 1
   qt     <- 0
   vt     <- 0
   premio <- 0
   escreval("... Início do PRG ...")
   
   enquanto (ix <= 2) faca
      escreva("Digite o Ordem de Serviço: ")
      leia(os)
      escreva("Digite a quantidade: ")
      leia(qtde)
      escreva("Digite o tipo [1,2,3]: ")
      leia(tip)
      escreval("-----------------")
      
      se (tip = 1) entao
         vT <- vT + (qtde * 0.05)
      senao
         se (tip = 2) entao
            vT <- vT + (qtde * 0.1)
         senao
            se (tip = 3) entao
               vT <- vT + (qtde * 0.15)
            senao
               escreval("Tipo digitado inválido! Produção não computada.")
            fimse
         fimse
      fimse
      
      qT <- qT + qtde
      ix <- ix + 1
   fimenquanto
   
   escreval("Quantidade Total Produzida: ", qT)
   escreval("Valor total da produção   : ", vT)
   
   se (qT > 500) e (qt <= 1000) entao
      premio <- vT * 0.1
   senao
      se (qT > 1000) e (qT <= 1500) entao
         premio <- vT * 0.15
      senao
         se (qt > 1500) entao
            premio <- vT * 0.2
         senao
            premio <- 0
         fimse
      fimse
   fimse
   
   escreval("Prêmio total da produção   : ", premio)
   escreval("Valor a pagar da produção  : ", (vT + premio))
   

Fimalgoritmo