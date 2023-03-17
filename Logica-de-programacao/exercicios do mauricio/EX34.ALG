Algoritmo "ex34"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : ler 11 nums, quantos são negativos, quantos são pares,
//               soma e média de pares, ímpares e todos.
// Autor(a)    : Maurício
// Data atual  : 17/11/2022
Var
// Seção de Declarações das variáveis 
   num, ix, negativos, somaPar, somaImpar, somaTodos : inteiro
   contPar, contImpar, contTodos                     : inteiro
   mediaPar, mediaImpar, mediaTodos                  : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início do PRG ...")
   ix         <- 1
   negativos  <- 0
   somaPar    <- 0
   somaImpar  <- 0
   somaTodos  <- 0
   contPar    <- 0
   contImpar  <- 0
   contTodos  <- 0
   mediaPar   <- 0
   mediaImpar <- 0
   mediaTodos <- 0
   
   enquanto (ix <= 11) faca
      escreva("digite um número: ")
      leia(num)
      se (num < 0) entao
         negativos <- negativos + 1
      fimse
      
      se (num % 2 = 0) entao
         somaPar <- somaPar + num
         contPar <- contPar + 1
      senao
         somaImpar <- somaImpar + num
         contImpar <- contImpar + 1
      fimse
      somaTodos <- somaTodos + num
      contTodos <- contTodos + 1
      ix <- ix + 1
   fimenquanto
   
   se (contPar > 0) entao
      mediaPar <- somaPar / contPar
   fimse
   
   se (contImpar > 0) entao
      mediaImpar <- somaImpar / contImpar
   fimse
   
   se (contTodos > 0) entao
      mediaTodos <- somaTodos / contTodos
   fimse

   escreval("------------------")
   escreval("... Resultados ...")
   escreval("------------------")
   escreval("Números negativos: ", negativos)
   escreval("Números pares    : ", contPar)
   escreval("Soma dos Pares   : ", somaPar)
   escreval("Média dos Pares  : ", mediaPar)
   escreval("Soma dos Ímpares : ", somaImpar)
   escreval("Média dos Ímpares: ", mediaImpar)
   escreval("Soma Total       : ", somaTodos)
   escreval("Média Total      : ", mediaTodos)
Fimalgoritmo