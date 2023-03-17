/*
Programa: vet03b.c
Escopo  : criar vetor 5 inteiros, calcular soma e média, informar menor e maior
Autor   : Maurício
Data    : 16/01/2023
Versão  : 1.01
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 5
	int v[tam];
	int ix, soma = 0, menor = 0, maior = 0;
	float media = 0.0;
	
    printf("... Inicio do PRG ...\n\n");
	
	printf("Leitura dos valores do vetor v[]\n");
	for(ix = 0; ix < tam; ix++){
		printf("Digite v[%d]: ",ix);
		scanf("%d",&v[ix]);
		soma = soma + v[ix];
		// definição do menor
		if (v[ix] < menor || ix == 0){
			menor = v[ix];
		}
		// definição do maior
		if (v[ix] > maior || ix == 0){
			maior = v[ix];
		}
	}
	
	printf("\n\nApresentacao dos valores do vetor de indices pares\n");
	for(ix = 0; ix < tam; ix++){
		printf("v[%d]: %d\n",ix,v[ix]);
	}
	
	printf("... Resultados ...\n\n");
	media = soma / tam;
	printf("Soma  = %d\n",soma);
	printf("Media = %.2f\n",media);
	printf("Menor: %d\n",menor);
	printf("Maior: %d\n",maior);
		
	system("PAUSE");
	return 0;
}