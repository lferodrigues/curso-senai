Algoritmo "Ex_028"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
//receba o nome e o salario do funcionario
//calcule os descontos conforme a tabela
//mostre nome, salario, descontos

Var
nome: caracter
salario: real
inss: real
ir:real
salL: real
Inicio
escreval(".....Hello World.....")
escreval("Digite o nome: ")
leia(nome)
escreval("Digite o sálario: ")
leia (salario)
se (salario <=500) entao
 inss:=salario*0.03
  ir:=salario*0.02
  salL:= salario-inss-ir
  escreval("O funcionario: ",nome," com o salario liquido de: ", salL," tera o desconto de INSS de: ",inss," e de imposto de renda de: ",ir )
senao
   se (salario > 500) e (salario <= 950.00) entao
   inss:=salario*0.05
   ir:=salario*0.04
   salL:= salario-inss-ir
   escreval("O funcionario: ",nome," com o salario liquido de: ", salL," tera o desconto de INSS de: ",inss," e de imposto de renda de: ",ir )
senao
   inss:=salario*0.07
   ir:=salario*0.06
   salL:= salario-inss-ir
   escreval("O funcionario: ",nome," com o salario liquido de: ", salL," tera o desconto de INSS de: ",inss," e de imposto de renda de: ",ir )
fimse
 fimse


Fimalgoritmo