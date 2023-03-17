Algoritmo "ex31bb"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Ler nome / idade finaliza em 0 apresenta menor e maior
// Autor(a)    : Maurício
// Data atual  : 16/11/2022
Var
// Seção de Declarações das variáveis 
   idade, soma, menorIdade, maiorIdade, cont : inteiro
   nome, menorNome, maiorNome                : caracter
   media                                     : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início PRG ...")
   soma       <- 0
   media      <- 0.0
   cont       <- 0
   menorIdade <- 0
   maiorIdade <- 0
   repita
      escreva("Digite a Idade: ")
      leia(idade)
      se (idade <> 0) entao
         escreva("Digite o nome: ")
         leia(nome)
         escreval("----------------")
         soma <- soma + idade

         se (idade <= menorIdade) ou (cont = 0) entao
            menorIdade <- idade
            menorNome  <- nome
         fimse
         
         se (idade >= maiorIdade) ou (cont = 0) entao
            maiorIdade <- idade
            maiorNome  <- nome
         fimse

         cont <- cont + 1
         
      fimse

   ate(idade = 0)

   se (cont <> 0) entao
      media <- soma / cont
   fimse
   escreval("... Resultados ...")
   escreval("Soma das Idades : ", soma)
   escreval("Nº de Idades    : ", cont)
   escreval("Média das Idades: ", media)
   escreval("Menor Idade     : ", menorIdade)
   escreval("Menor Idade/Nome: ", menorNome)
   escreval("Maior Idade     : ", maiorIdade)
   escreval("Maior Idade/Nome: ", maiorNome)

Fimalgoritmo