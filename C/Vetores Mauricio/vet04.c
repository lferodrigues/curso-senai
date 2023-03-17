/*
Programa: vet04.c
Escopo  : vetor com 10 posi��es com os 10 primeiros pares a partir do 0
Autor   : Maur�cio
Data    : 16/01/2023
Vers�o  : 1.01

* entrada
vetor[10]
Os valores ser�o digitados?
Os valores ser�o atribu�dos?
Quais s�os os valores a serem obtidos?
Ser�o os 10 primeiro inteiros a partir do 0
[0,2,4,6,8,10,12,14,16,18]

* processamento
atribui��o autom�tica ( n�o tem teclado )
v[ix] mod 2 == 0 substituido por v[ix] = ix * 2;
acumular a soma dos valores

* sa�da
apresentar os valores v[ix]
apresentar a soma


*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 1000
	int v[tam];
	int ix, soma = 0;
	
    printf("... Inicio do PRG ...\n\n");
	
	printf("vetor v[10 primeiro pares a partir do 0]\n");
	for(ix = 0; ix < tam; ix++){
		// atribui��o autom�tica
		v[ix] = ix * 2;
		// soma
		soma = soma + v[ix];
		// apresenta��o do valor
		printf("v[%d] = %d\n",ix,v[ix]);
	}
	
	printf("... Resultados ...\n\n");
	printf("Soma  = %d\n",soma);
	
		
	system("PAUSE");
	return 0;
}