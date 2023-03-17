Algoritmo "ex27"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 07/11/2022
Var
codigo:inteiro
preco,desc:real
tamanho:caractere
Inicio
escreval("Digite o codigo da camisa")
leia(codigo)
escreval("Digite o preco da camisa")
leia(preco)
escreval("Digite o tamanho da camisa")
leia(tamanho)
se(tamanho="G") entao
desc:=preco*0.1
senao
se(tamanho="M") entao
desc:=preco*0.2
senao
desc:=preco*0.3
fimse
fimse
 escreval("O codigo do produto selecionado é: ",codigo," tendo o seu valor de desconto de R$",desc)


Fimalgoritmo