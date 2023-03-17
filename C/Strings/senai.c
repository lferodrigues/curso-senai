/*
criar um programa em c que 
crie uma string com 5 posicoes validas
(6) por causa do null
atribuir um valor "senai" a string
imprimir o valor definido da seguint forma
senai
sena
sen
se
s
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	//#define tam 6
	int ix,i;
	char frase[6]="Senai";
	printf(">>>INICIO<<<\n");	
	//printf("Digite a frase.\n");
	//gets(frase);	
	
	for(i=0;i<5;i++){
		for(ix=0;ix<=(4-i);ix++){
			printf("%c",frase[ix]);
		}
		printf("\n");
	} 
	
	system("PAUSE");
	return 0;
	
}