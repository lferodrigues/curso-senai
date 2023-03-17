Algoritmo "ex44"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/11/2022
Var
   os, qp,qt, i : inteiro
   tp : inteiro
   t ,vt : real
   qte:caracter

Inicio
   Escreval(">>>>>Inicio do prog<<<<<")
   para i de 1 ate 6 faça
      escreval ("Digite a ordem de serviço: ")
      leia (os)
      escreval ("Digite a quantidade do produto: ")
      leia (qp)
      escreval ("Digite o tipo do produto: ")
      leia (tp)
      escreval("Deseja imprimir o valor? [S->Sim/N->Não]")
      leia(qte)

      se(qte="s")ou (qte="S") entao
         se (qt>500) e (qt<=1000) entao
            vt:= t*0.10
         senao
            se (qt>1000)e (qt<=1500)  entao
               vt:= t*0.15
            senao
               se (qt>1500) entao
                  vt:= t*0.20
               senao
                  vt:=t
               fimse
            fimse
         fimse
         escreval (">>>>>RESULTADO DOS PREMIOS<<<<<")
         escreval("Total de peças: ",qt)
         escreval ("Valor a receber: R$", vt:2:2)

      senao
         Escreval ("___________________________________")
         qt:=qp+qt
         se (tp=1) entao
            t:= t+(qp*0.05)
         senao
            se (tp=2) entao
               t:=t+(qp*0.10)
            senao
               se (tp=3) entao
                  t:=t+(qp*0.15)
               senao
                  Escreval ("Valor Invalido. ")
               fimse
            fimse
         fimse
      fimse
   fimpara
   se (qt>500) e (qt<=1000) entao
      vt:= t*0.10
   senao
      se (qt>1000)e (qt<=1500)  entao
         vt:= t*0.15
      senao
         se (qt>1500) entao
            vt:= t*0.20
         senao
            vt:=t
         fimse
      fimse
   fimse

   escreval (">>>>>RESULTADO DOS PREMIOS<<<<<")
   escreval("Total de peças: ",qt)
   escreval ("Valor a receber: R$", vt:2:2)
Fimalgoritmo

