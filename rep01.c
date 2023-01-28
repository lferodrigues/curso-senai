/*
Programa: rep01.c
Escopo  : mostrar pares entre 1000 e 1500
Autor   : Maurício
Data    : 14/12/2022
Versão  : 1.01
*/

// bibliotecas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int ix;
	
	printf("... Inicio do PRG ...\n\n");
	printf("Apresentar pares entre 1000 e 1500\n\n");
	
	for(ix = 1000; ix <= 1500; ix = ix + 2){
		printf("par: %4d\n",ix);
	}
	
	system("PAUSE");
	return 0;
}