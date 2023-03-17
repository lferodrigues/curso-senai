algoritmo "mes_se"
// Função : Escolher um número e informar o mês de referência
//          utilizando o condicional se
// Autor  : Maurício
// Data   : 17/05/2013
// Seção de Declarações
var
   mes : inteiro
inicio
// Seção de Comandos
   escreval("Digite o número do Mês: ")
   leia(mes)
   se mes=1 entao
      escreval("Janeiro")
   senao
      se mes=2 entao
         escreval("Fevereiro")
      senao
        se mes=3 entao
           escreval("Março")
        senao
          se mes=4 entao
              escreval("Abril")
          senao
            se mes=5 entao
              escreval("Maio")
            senao
               se mes=6 entao
                 escreval("Junho")
               senao
                  se mes=7 entao
                    escreval("Julho")
                  senao
                     se mes=8 entao
                       escreval("Agosto")
                     senao
                        se mes=9 entao
                          escreval("Setembro")
                        senao
                           se mes=10 entao
                             escreval("Outubro")
                           senao
                             se mes=11 entao
                                escreval("Novembro")
                              senao
                                 se mes=12 entao
                                   escreval("Dezembro")
                                 senao
                                   escreval("Número Inválido")
                                 fimse
                              fimse
                           fimse
                        fimse
                     fimse
                  fimse
               fimse
            fimse
          fimse
        fimse
      fimse
   fimse
fimalgoritmo


