Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/11/2022
Var

   i:inteiro

   soma,media,num:real

Inicio

   escreval(".....inicio...")

   para i de 1 ate 9 faca
      escreval("Digite um numero: ")
      leia(num)
      se(num>-1) entao
         soma:=num+soma
         media:=soma/i
           senao
      fimse
   fimpara
   escreval("")
   escreval("..............Resultado...............")
   escreval("")
   escreval("Soma....:",soma)
   escreval("Media..........: ",media)


Fimalgoritmo