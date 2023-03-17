/*
Programa: rev05.c
Escopo  : 
- criar uma string[30]
- ler o valor para ela
- substituir os elementos de índices divisíveis por 3 pelo caracter 'X'
- apresentar a string original e a modificada
Autor   : Maurício
Data    : 09/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char st0[31] = {'\0'};
	char st1[31] = {'\0'};
	int ix;
	
	printf("Digite a string st[]: ");
	fgets(st0,30,stdin);
	
	for(ix = 0; ix <= 30; ix++){
		if(ix % 3 == 0){
			st1[ix] = 'X';
		}else{
			st1[ix] = st0[ix];
		}
	}
	
	printf("String original: %s\n",st0);
	printf("String alterada: %s\n",st1);
	
	
	printf("String altera. Apresentada por for():\n");
	for(ix = 0; ix <= 30 && st0[ix] != '\0'; ix++){
		if(ix % 3 == 0){
			printf("X");
		}else{
			printf("%c",st0[ix]);
		}
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}