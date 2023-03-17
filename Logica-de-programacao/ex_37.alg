Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/11/2022
Var
// Seção de Declarações das variáveis 
li,ls,ix:inteiro
f,c:real

Inicio
escreval("Digite o primeiro valor")
leia(li)
escreval("Digite o segundo valor")
leia(ls)
 se(li<ls)entao
 ix<-li
 enquanto (ix<=ls) faca
  f<-ix*1.8+32
  escreval(ix,"ºC = ",f,"º F")
  ix<-ix+1
 fimenquanto
 senao
      escreval("valores invalidos")
 fimse
Fimalgoritmo