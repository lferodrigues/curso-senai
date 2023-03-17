Algoritmo "ex_30"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/11/2022
Var
num,soma: inteiro
media: real
ix: inteiro
menor:inteiro
maior:inteiro
Inicio
soma:=0
media:=0
ix:=0
enquanto (ix <5) faca
 escreval("[",ix,"] Digite um numero")
 leia(num)

 se(num<menor) ou (ix=0) entao
   menor:=num
     fimse
 se(num>maior) ou (ix=0) entao
      maior:=num

  fimse
 ix:=ix+1
 soma:=soma+num
  escreval("O numero digitado foi: ",num)
  fimenquanto
  media:=soma/ix
  escreval("..............Resultado...............")
  escreval("Maior valor....:",maior)
  escreval("Menor valor....:",menor)
  escreval("Media..........: ",media)
  

Fimalgoritmo