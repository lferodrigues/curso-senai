/*
Programa: rep10.c
Escopo  : mostrar números inteiros nas bases: octal e hexadecimal
Autor   : Maurício
Data    : 16/12/2022
Versão  : 1.01
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define x 1
	int tam;
	int vet[x]; 
	int ix,s;
	printf("Digite o tamanho do vetor[]: ");
	scanf("%d",&tam);
	
	if(tam>0){
   		vet[x] == tam;
	}
	for(ix=0;ix<vet[x];ix++){
		printf("Digite os elementos do vetor[%d]: ",ix,vet[x]);	
        scanf("%d",&vet[tam]);
        if(vet[tam] % 2 ==0){
		s= vet[tam]+2;
        printf("vetor[%d]: %d + 2= %d \n",ix,vet[tam],s);	
		}
	}
	
	for(ix = 0; ix < vet[x]; ix++){
		printf("v[%d]: %d\n");
	}
	
		
	return 0;
}
