Algoritmo "ex31b"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Conversão de C/F (par) e F/C (ímpar)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/11/2022
Var
// Seção de Declarações das variáveis 
   f, c       : real
   ix, li, ls : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início do PRG ...")
   escreva("Digite a temperatura em li [limite inferior]: ")
   leia(li)
   escreva("Digite a temperatura em ls [limite superior]: ")
   leia(ls)
   
   se (li < ls) entao
      para ix de li ate ls faca
         se (ix % 2 = 0) entao
            f <- ix * 1.8 + 32
            escreval(ix, " ºC = ", f, " ºF")
         senao
            c <- (ix - 32)/1.8
            escreval(ix, " ºF = ", c, " ºC")
         fimse
      fimpara
   senao
      escreval("Valores Inválido!")
   fimse

Fimalgoritmo