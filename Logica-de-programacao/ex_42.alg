Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Felipe Rodrigues
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/11/2022
Var

   i,par,impar,negativo,soma,num:inteiro

   soma_par,soma_impar,media,media_par,media_impar:real

Inicio
   escreval(".....inicio...")
   repita
      escreval("Digite um numero: ")
      leia(num)
      soma:= soma+num
      se(num<0)  entao
         negativo<- negativo + 1
      senao
         se(num mod 2 = 0) entao
            par:= par+1
            soma_par:=soma_par+num
            media_par:=soma_par/par
         senao
            impar:= impar+1
            soma_impar:=soma_impar+num
            media_impar:=soma_impar/impar
         fimse
      fimse
      i:=i+1
   ate(i=11)
   media:=soma/i

   escreval("")
   escreval("..............Resultado...............")
   escreval(" ")
   escreval("quantdade de nº negativos................:",negativo)
   escreval("...................................................")
   escreval("quantidade de nº pares...................:",par)
   escreval("Soma............................................:",soma_par)
   escreval("Media...........................................: ",media_par)
   escreval("...................................................")
   escreval("quantidade de nº impares...................:",impar)
   escreval("Soma............................................:",soma_impar)
   escreval("Media...........................................: ",media_impar)
   escreval("...................................................")
   escreval("...................................................")
   escreval("Soma Total......................................:",soma)
   escreval("Media Total.....................................: ",media)

Fimalgoritmo