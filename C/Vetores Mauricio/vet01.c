/*
Programa: vet01.c
Escopo  : criar vetor 7 posi��es ler valores, apresentar valores �ndices pares
Autor   : Maur�cio
Data    : 16/12/2022
Vers�o  : 1.01
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 7
	int v[tam];
	int ix;
	
    printf("... Inicio do PRG ...\n\n");
	
	printf("Leitura dos valores do vetor v[]\n");
	for(ix = 0; ix < tam; ix++){
		printf("Digite v[%d]: ",ix);
		scanf("%d",&v[ix]);
	}
	
	printf("\n\nApresentacao dos valores do vetor de indices pares\n");
	for(ix = 0; ix < tam; ix++){
		if(ix % 2 == 0){
			printf("v[%d]: %d\n",ix,v[ix]);
		}
	}
	
	system("PAUSE");
	return 0;
}