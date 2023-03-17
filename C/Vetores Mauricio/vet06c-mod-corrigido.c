/*
Programa: vet06-modificado.c
Escopo  : - vetor 10 inteiros 
		  - leia x 
		  - encontre x no vetor (todas as ocorrências) 
		  - informe o total de ocorrências
		  - informe a(s) posição(ões) encontrada(s)
Autor   : Maurício
Data    : 19/01/2023
Versão  : 1.01
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 10
	// variáveis
	int v[tam];
	int r[tam] = {0};
	int ix, c = 0, x = 0, iy = 0;
		
	printf("... Início do PRG ...\n\n");
	printf("Digite os valores para v[]\n");
	
	// leitura dos valores do vetor
	for(ix = 0; ix < tam; ix++){
		printf("Digite o valor de v[%d]: ",ix);
		scanf("%d",&v[ix]);
	}
	
	// apresentação dos valores do vetor
	printf("\n\nValores digitados para v[]\n");
	for(ix = 0; ix < tam; ix++){
		printf("v[%d]: %d\n",ix,v[ix]);
	}
	
	// leitura de x e y
	printf("\n\nDigite o indice do vetor para determinar os valores: \n");
	do {
		printf("\nDigite o valor de x: ");
		scanf("%d",&x);
		printf("-------------------\n");	
	}while(x < 0);
	
	// pesquisa do valor x
	for(ix = 0; ix  < tam; ix++){
		if(v[ix] == x){
			r[iy] = ix;
			iy++;
			c++;
		}
	}
	
	// apresentação dos números de ocorrências
	printf("Total de ocorrencias do valor %d no vetor[]: %d\n",x,c);
	if (iy > 0){
		// apresentação das ocorrências nos respectivos itens
		printf("Valor encontrado nos indices: ");
		for(ix = 0; ix < tam && ix < iy; ix++){
			printf("%d",r[ix]);
			if(ix <  c - 1){
				printf(", ");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}
