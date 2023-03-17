/*
Programa: mat07a.c
Escopo  : 
- Criar duas matrizes de 3 x 3 (3 linhas e 3 colunas);
- Ler os valores para as posições das matrizes;
- Criar uma matriz auxiliar que receberá a soma dos elementos das duas matrizes principais
- Exibir as matrizes principais e a auxiliar
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
	int ma[LIN][COL], mb[LIN][COL], mc[LIN][COL], i, j;
	
	printf("... Inicio de PRG ...\n\n");
	
	
	// digitação de valores da matriz a
	printf("Digitacao dos valores da matriz ma[][]: \n\n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&ma[i][j]);
		}
		printf("\n");
	}
	
	// digitação de valores da matriz b
	printf("\n\nDigitacao dos valores da matriz mb[][]: \n\n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&mb[i][j]);
		}
		printf("\n");
	}
	
	// apresentação dos valores matriz a
	printf("\n\nMatriz A: \n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina	
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("%4d\t",ma[i][j]);    
		}
		printf("\n");
	}
	
	// apresentação dos valores matriz b
	printf("\n\nMatriz B: \n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina	
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("%4d\t",mb[i][j]);    
		}
		printf("\n");
	}
	
	// criação e apresentação dos valores matriz c
	printf("\n\nMatriz C (A[][] + B[][]): \n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina	
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			mc[i][j] = ma[i][j] + mb[i][j];
			printf("%4d\t",mc[i][j]);    
		}
		printf("\n");
	}
	

	system("PAUSE");
	return 0;
}
