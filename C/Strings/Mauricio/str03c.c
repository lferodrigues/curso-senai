/*
Programa : str03c.c
Escopo   :
		   - criar uma strings de 30 posi��es
		   - ler o valor para a string
		   - informar o n�mero de palavras digitadas
		   - cada palavra dever� ser separada por "espa�o"
Autor    : Maur�cio
Data     : 01/02/23
Vers�o   : 1.01
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char st1[31];
	int ix = 0, palavras = 0;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Digite a string: ");
	fgets(st1,30,stdin);
	
	if((st1) > 0 && st1[0] != '\n'){
		for(ix = 0; st1[ix] != '\0'; ix++){
			//printf("Letra: %c\n",st1[ix]);
			if(st1[ix] == ' ' || st1[ix] == '\n'){
				palavras++;
			}
		}
	} else {
		printf("String INVALIDA!\n\n");
	}
	

	printf("Qtde. de palavras digitadas: %d\n",palavras);
	system("PAUSE");
	return 0;
}