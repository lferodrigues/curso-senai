/*
ex06 - ler vetor 6 posições e apresentar o inverso
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	#define tam 6
	int v[tam];
	int ix;
	
	printf("Leitura dos Vetores v[]:\n");
	for (ix=0;ix < tam; ix++){
		printf("Vetor[%d]: ",ix);
		scanf("%d",&v[ix]);
	}
	
	printf("\nApresentaçao dos Vetores na ordem Inversa:");
	for (ix = (tam - 1); ix >= 0; ix--){
		printf("\nVetor [%d]: %d",ix,v[ix]);	
	}
	printf("\n\n");
    system("PAUSE");
	return 0;
}