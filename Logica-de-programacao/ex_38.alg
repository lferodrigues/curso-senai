Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/11/2022
Var
// Seção de Declarações das variáveis
ix,li,ls:inteiro
f,c :real

Inicio
escreval("Digite o primeiro valor")
leia(li)
escreval("Digite o segundo valor")
leia(ls)
se (li < ls) entao
ix:=li
   para ix de (ix = li) ate (ix = ls) faca
        se (ix mod 2 = 0) entao
           f <- ix*1.8 + 32
           escreval(ix,"ºC = ",f,"ºF")
        senao
             c <- (ix - 32) / 1.8
             escreval(ix,"ºF = ",c,"ºC")
        fimse
        ix:=ix+1
   fimpara
senao
     escreval("Valores Inválidos")
fimse

Fimalgoritmo