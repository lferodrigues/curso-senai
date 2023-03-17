Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// receba o codigo, total de vendas(em quantidade do produto e valor)
//calcule a comissao
//informe o codigo, total de vendas, e a comissao do vendedor
//(total e por unidade)
Var
// Seção de Declarações das variáveis 
codigo:inteiro
total_vendas,quantidade,vlr,comissao,vendas_unit:real

Inicio
//entrada
   escreval("Digite o codigo do produto: ")
   leia(codigo)
   escreval("Digite o total de vendas do produto ",codigo,":")
   leia(quantidade)
   escreval("Digite o valor do produto:")
   leia(vlr)
   total_vendas:= quantidade*vlr
            se(quantidade<=100) entao
              comissao:= total_vendas
              senao
                   se (quantidade>100)e(quantidade<=350) entao
                    comissao:=total_vendas*5/100
                    senao
                    comissao:=total_vendas*10/100
              fimse
            fimse
        escreval("codigo do produto: ",codigo)
        escreval("total de vendas: ",total_vendas)
        escreval("comissao de vendas: ",comissao)
        
Fimalgoritmo