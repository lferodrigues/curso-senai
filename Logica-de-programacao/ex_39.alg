Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/11/2022
Var
   nome,nmaior,nmenor: caractere
   idade: inteiro
   i:inteiro
   menor:inteiro
   maior:inteiro
   soma,media:real

Inicio

   escreval(".....inicio...")

   repita
      escreval("Digite a idade: ")
      leia(idade)
      se(idade<>0) entao
         escreval("Digite o nome: ")
         leia(nome)
         escreval("--------------")
         se(idade<menor)  ou (i=0) ou (idade=menor)  entao
            menor:=idade
            nmenor:=nome
            i:=i+1
         fimse
         se(idade>maior) ou (i=0) ou (idade=maior) entao
            maior:=idade
            nmaior:=nome

         fimse
         i:=i+1
         soma:=soma+idade
      fimse
   ate(idade=0)
   se (i<>0) entao
      media:=soma/i
   fimse
   escreval("")
   escreval("..............Resultado...............")
   escreval("")
   escreval("Maior idade....:",nmaior,maior)
   escreval("Menor idade....:",nmenor,menor)
   escreval("Media..........: ",media)


Fimalgoritmo