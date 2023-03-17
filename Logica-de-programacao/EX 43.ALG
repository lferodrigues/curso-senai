Algoritmo "ex 43"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 21/11/2022
Var
   CP,i : inteiro
   Qp,Qt,Vu, Vb, P, M, G,Vl : real
   Tamanho : caracter

Inicio
   escreval("...Inicio de prog....")
   repita
      Escreval ("Digite o codigo do produto")
      leia (Cp)
      Escreval ("Digite o tamanho do produto")
      leia (Tamanho)
      Escreval ("Digite o quantidade do produto")
      leia (Qp)
      Escreval ("Digite o valor do produto")
      leia (Vu)
      Escreval("---------------------------------------------")
       Qt:=Qt+Qp
      Vb:=vb+(Vu*Qp)
      
      se (Tamanho="P") entao
         P:=P+(Vu*0.2*Qp)
      senao
         se (Tamanho="M") entao
            M:=M+(Vu*0.15*Qp)
         senao
            G:=G+(Vu*0.10*Qp)
         fimse
      fimse
      i:=i+1
   ate (i=3)
   escreval("....Resultado...")
   escreval ("Quantidade total de produto.............:" ,Qt)
   escreval ("Valor Bruto total.......................:" ,Vb)
   escreval("Valor liquido dos produtos tamanho P.....:",vb-P)
   escreval("Valor liquido dos produtos tamanho M.....:",vb-M)
   escreval("Valor liquido dos produtos tamanho G.....:",vb-G)
Fimalgoritmo