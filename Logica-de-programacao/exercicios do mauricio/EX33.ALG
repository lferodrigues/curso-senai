Algoritmo "ex33"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : ler 8 nums. informar quantos estão ou não entre [100,200]
//               Quantos são divisíveis por 3 informando soma e média dos
//               divisíveis e geral
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/11/2022
Var
// Seção de Declarações das variáveis 
   num, ix, dentroIntervalo, foraIntervalo, contTres, somaTres : inteiro
   mediaTres : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreval(".. Início do PRG ...")
  
  dentroIntervalo <- 0
  foraIntervalo   <- 0
  contTres        <- 0
  somaTres        <- 0
  mediaTres       <- 0
  para ix de 1 ate 8 faca
     escreva("Digite um número: ")
     leia(num)
     // testa o intervalo [100,200]
     se (num >= 100) e (num <= 200) entao
        dentroIntervalo <- dentroIntervalo + 1
     fimse
     // testa divisíveis por 3
     se (num % 3 = 0) entao
        somaTres <- somaTres + num
        contTres <- contTres + 1
     fimse
  fimpara
  
  foraIntervalo <- ix - dentroIntervalo
  se (contTres > 0) entao
     mediaTres <- somaTres / contTres
  fimse
  
  escreval("--------------------")
  escreval("... Resultados ...")
  escreval("--------------------")
  escreval("Dentro do Intervalo: ", dentroIntervalo)
  escreval("Fora do Intervalo..: ", foraIntervalo)
  escreval("--------------------")
  escreval("Números divisíveis por   3: ", contTres)
  escreval("Soma dos divisíveis por  3: ", somaTres)
  escreval("Média dos divisíveis por 3: ", mediaTres)
  escreval("--------------------")

Fimalgoritmo