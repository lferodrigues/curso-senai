Algoritmo "semnome"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Maurício
// Descrição   : Ler LI e LS calcular conversão C/F no intervalo
// Autor(a)    : Maurício
// Data atual  : 09/11/2022
Var
// Seção de Declarações das variáveis 
   li, ls, ix : inteiro
   f          : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("... Início PRG ...")
   escreva("Digite o valor de LI [Limite Inferior]: ")
   leia(li)
   escreva("Digite o valor de LI [Limite Superior]: ")
   leia(ls)
   // validar li/sl
   se (li < ls) entao
      ix <- li
      enquanto (ix <= ls) faca
         f <- ix * 1.8 + 32
         escreval(ix,"° C = ",f,"° F")
         ix <- ix + 1
      fimenquanto
   senao
      escreval("Valores limites inválidos!")
   fimse

Fimalgoritmo