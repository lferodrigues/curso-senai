/*
Programa: vet06d.c
Escopo  : criar um vetor tam dinâmico, ler os valores, somar 2 aos elementos
          de índice par.
Autor   : Maurício
Data    : 19/01/2023
Versão  : 1.01
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	
	// variáveis
	
	int ix, t = 0;	
	
	printf("... Início do PRG ...\n\n");
	
	printf("Digite o tamanho do vetor[]: ");
	scanf("%d",&t);
	
	int v[t];
	
	printf("Digite os valores para v[]\n");
	
	// leitura dos valores do vetor
	for(ix = 0; ix < t; ix++){
		printf("Digite o valor de v[%d]: ",ix);
		scanf("%d",&v[ix]);
		if(ix % 2 == 0){
			v[ix] = v[ix] + 2;
		}
	}
	
	// apresentação dos valores do vetor
	printf("\n\nValores digitados para v[]\n");
	for(ix = 0; ix < t; ix++){
		printf("v[%d]: %d\n",ix,v[ix]);
	}
	
	system("PAUSE");
	return 0;
}