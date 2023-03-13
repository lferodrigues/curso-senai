/*
Programa: vet06b.c
Escopo  : vetor 10 inteiros leia x encontre x no vetor informe posição encontrada
          total de ocorrências
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
	int ix, c = 0, x = 0;	
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
	}while(x < 0 || x > tam );
	
	// pesquisa do valor x
	for(ix = 0; ix  < tam; ix++){
		if(v[ix] == x){
			printf("Valor encontrado no elemento v[%d]\n",ix);
			c++;
		}
	}
	
	printf("Total de ocorrencias do valor %d no vetor[]: %d\n",x,c);
	
	
	system("PAUSE");
	return 0;
}