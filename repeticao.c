/*
Programa: repeticao.c
Escopo  : criar uma tabuada usando while/do, do/while e fo
Autor   : Maurício
Data    : 14/12/2022
Versão  : 1.01
*/

// bibliotecas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int num, ix;
	
	printf("... Inicio de PRG ...\n\n");
	
	printf("Tabuada usando while/do \n\n");
	printf("Digite o numero para criacao da tabuada: ");
	scanf("%d",&num);
	
	printf("\n\nTabuada do numero: %d -----------------\n",num);
	ix = 1;
	while (ix <= 10){
		printf("%3d * %3d = %3d\n",ix,num,ix * num);
		ix++;
	}
	
	printf("\n\n\nTabuada usando do/while \n\n");
	printf("Digite o numero para criacao da tabuada: ");
	scanf("%d",&num);
	
	printf("\n\nTabuada do numero: %d -----------------\n",num);
	ix = 1;
	do {
		printf("%3d * %3d = %3d\n",ix,num,ix * num);
		ix++;
	} while (ix <= 10);

	
	printf("\n\n\nTabuada usando for \n\n");
	printf("Digite o numero para criacao da tabuada: ");
	scanf("%d",&num);
	
	printf("\n\nTabuada do numero: %d -----------------\n",num);
	for(ix = 1; ix <= 10; ix++){
		printf("%3d * %3d = %3d\n",ix,num,ix * num);
	}

	system("PAUSE");
	return 0;
}