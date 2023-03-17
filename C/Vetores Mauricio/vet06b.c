/*
Programa: vet06a.c
Escopo  : ler valores vetor[11] cada elemento recebe num lido * índice vetor
Autor   : Maurício
Data    : 16/01/2023
Versão  : 1.01
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 11
	int v[tam];
	int ix, num = 0;
	
    printf("... Inicio do PRG ...\n\n");
	
	printf("Leitura de valores para o vetor:\n");
	for(ix = 0; ix < tam; ix++){
		printf("Digite o valor para v[%d]: ",ix);
		scanf("%d",&num);
		v[ix] = num * ix;
	}
	
	printf("\nValores do Vetor (num lido * indice)\n");
	for(ix = 0; ix < tam; ix++){
		printf("v[%d]: %d\n",num,v[ix]);
	}
		
	system("PAUSE");
	return 0;
}