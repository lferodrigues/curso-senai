Algoritmo "ex29"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : PRG de cálculo de comissão
// Autor(a)    : Maurício
// Data atual  : 08/11/2022
Var
// Seção de Declarações das variáveis 
   cod, qtde : inteiro
   vlrU, vlrT, comU, comT : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   // entrada
   escreval("... Início de PRG ...")
   escreva("Digite o código do produto: ")
   leia(cod)
   escreva("Digite a quantidade do produto: ")
   leia(qtde)
   escreva("Digite o valor unitário do produto: ")
   leia(vlrU)
   // processamento
   vlrT <- qtde * vlrU
   comT <- 0
   //se (vlrT <= 100) entao
   //   comT <- 0
   //senao
   //   se (vlrT <= 350) entao
   //      comT <- vlrT * 0.05
   //   senao
   //      comT <- vlrT * 0.1
   //   fimse
   //fimse
   se (vlrT > 100) e (vlrT <= 350) entao
      comT <- vlrT * 0.05
   senao
      se (vlrT > 350) entao
         comT <- vlrT * 0.1
      fimse
   fimse
   comU <- comT / qtde
   // saída
   escreval("... RESULTADOS ...")
   escreval("Código...........: ", cod)
   escreval("Total da Venda...: ", vlrT)
   escreval("Total comissão...: ", comT)
   escreval("Comissão unitária: ", comU)

Fimalgoritmo