/*
Programa: mat04.c
Escopo  : 
- Criar um programa em C onde:
- Leia  os  elementos de uma matriz inteira de 4 x 4
- Imprimir a matriz digitada e os elementos da diagonal principal.
Autor   : Maurício
Data    : 08/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define LIN 3
	#define COL 3
	int m[LIN][COL], i, j;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Digitacao dos valores da matriz[][]: \n\n");
	
	// digitação de valores da matriz
	for(i = 0; i < LIN; i++){  // externo - controle de lina
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	
	// apresentação dos valores
	printf("\n\nMatriz digitada: \n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina	
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("%4d\t",m[i][j]);    
		}
		printf("\n");
	}
	
	
	// apresentação dos valores
	printf("\n\nDIAGONAL PRINCIPAL da Matriz digitada: \n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina	
		for(j = 0; j <COL; j++){ // externo - controle de colunas
			if(j==(COL-i-1)){
				printf("%4d\t",m[i][j]);
			} else {
				printf("----\t");
			}    
		}
		printf("\n");
	}
	

	system("PAUSE");
	return 0;
}
