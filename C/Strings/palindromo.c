/*
Programa : palindromo.c

Escopo   : ler uma string de até 20 posições e informar se é ou 
           não palíndromo. Exs. de palíndromos: arara, osso, ovo...
Autor    : Maurício
Data     : 02/02/23
Versão   : 1.01
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char st[21];
	int x, y, tam;
	char flag = 'v';
	
	printf("Digite a string[]: ");
	fgets(st,20,stdin);
	
	tam = strlen(st) - 1;
	
	printf("A string [%s] tem %d caracteres.\n",st,tam);
	
	// impressão na ordem direta usando for()
	printf("\n\nImpressao na ordem direta: ");
	for(x = 0; x < tam; x++){
		printf("%c",st[x]);
	}
	printf("\n");
	
	printf("\n\nImpressao na ordem inversa: ");
	for(y = tam; y >= 0; y--){
		printf("%c",st[y]);
	}
	printf("\n");
	
	// verificação do palíndromo
	y = tam - 1;
	for(x = 0; x < tam; x++){
		if(st[x] != st[y - x]){
		   flag = 'f';	
		}
		//printf("st[x] = %c e st[y] = %c\n",st[x],st[y]);
		//y--;
	}
	
	printf("\n\n");
	if(flag == 'v'){
		printf("A string E palindromo.\n\n");
	} else {
		printf("A string NAO E palindromo.\n\n");
	}
	
	system("PAUSE");
	return 0;
}