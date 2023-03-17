/*
Programa: vet01.c
Escopo  : criar vetor 5 inteiros, calcular soma e média
Autor   : Maurício
Data    : 16/12/2022
Versão  : 1.01
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 5
	int v[tam];
	int ix, soma = 0;
	float media = 0.0;
	
    printf("... Inicio do PRG ...\n\n");
	
	printf("Leitura dos valores do vetor v[]\n");
	for(ix = 0; ix < tam; ix++){
		printf("Digite v[%d]: ",ix);
		scanf("%d",&v[ix]);
		soma = soma + v[ix];
	}
	
	printf("\n\nApresentacao dos valores do vetor de indices pares\n");
	for(ix = 0; ix < tam; ix++){
		printf("v[%d]: %d\n",ix,v[ix]);
	}
	
	printf("... Resultados ...\n\n");
	media = soma / tam;
	printf("Soma  = %d\n",soma);
	printf("Media = %.2f\n",media);
	
	system("PAUSE");
	return 0;
}