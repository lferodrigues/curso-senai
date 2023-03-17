Algoritmo "EX_26"
// Contrua um algoritmo que receba três números e mostre qual é o maior
// e qual a foi sua ordem de digitação 1°,2°,3°
Var
// Seção de Declarações das variáveis 
n1,n2,n3 : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval ("Hello World")
escreval ("Digite um número: ")
leia (n1)
escreval ("Digite um número: ")
leia (n2)
escreval ("Digite um número: ")
leia (n3)

     se(n1>n2) e (n1>n3)ENTAO
      escreval("O maior número é: ",n1)
      escreval("1ºdigitado foi: ",n1)
      escreval("2ºdigitado foi: ",n2)
      escreval("3ºdigitado foi: ",n3)
     senao
      se(n2>n1) e (n2>n3)ENTAO
       escreval("O maior número é: ",n2)
       escreval("1ºdigitado foi: ",n1)
       escreval("2ºdigitado foi: ",n2)
       escreval("3ºdigitado foi: ",n3)
      senao
       se(n3>n2) e (n3>n1)ENTAO
        escreval("O maior número é: ",n3)
        escreval("1ºdigitado foi: ",n1)
        escreval("2ºdigitado foi: ",n2)
        escreval("3ºdigitado foi: ",n3)
      
                      fimse
                fimse
      fimse

Fimalgoritmo
