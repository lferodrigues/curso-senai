/*
Programa : str03b.c
Escopo   :
		   - criar duas strings de 20 posições
		   - ler o valor para as strings
		   - compará-las e verificar se são iguais
Autor    : Maurício
Data     : 01/02/23
Versão   : 1.01
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char st1[21] = {'\0'};
	char st2[21] = {'\0'};
	int ix = 0, flag = 0;
	
	printf("... Inicio do PRG ...\n\n");
	printf("Digite a string st1[]: ");
	fgets(st1,20,stdin);
	printf("Digite a string st2[]: ");
	fgets(st2,20,stdin);
	
	if(strlen(st1) == strlen(st2)){
		for(ix = 0; ix < strlen(st1) - 1; ix++){
			if(st1[ix] != st2[ix]){
				flag++;
			}
		}
	} else {
		printf("As strings possuem tamanhos diferentes!\n");
		flag++;
	}
	
	if(flag == 0){
		printf("As strings sao iguais!\n\n");
	} else {
		printf("As strings sao DIFERENTES!\n\n");
	}
	
	system("PAUSE");
	return 0;
}