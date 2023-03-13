/*
Programa: rep02.c
Escopo  : mostrar pares entre limite inferio e superior lidos
Autor   : Maurício
Data    : 14/12/2022
Versão  : 1.01
*/

// bibliotecas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int ix, li, ls, aux;
	printf("... Inicio de PRG ...\n\n");
	printf("Digite o limite inferior: ");
	scanf("%d",&li);
	printf("Digite o limite superior: ");
	scanf("%d",&ls);
	
	//for(ix = li; ix <= ls; ix++){
	//	if (ix % 2 == 0){
	//		printf("%d \n",ix);
	//	}
	//}
	
	if (li % 2 == 0) {
		aux = li;
	} else {
		aux = li + 1;
	}
	
	for(ix = aux; ix <= ls; ix = ix + 2){
		printf("%d \n",ix);
	}
	
	system("PAUSE");
	return 0;
}