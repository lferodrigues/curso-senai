/*
Programa: mat00.c
Escopo  : apresenta��o de conceitos b�sicos de matrizes
Autor   : Maur�cio
Data    : 03/02/2023
Vers�o  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXLIN 3
#define MAXCOL 3

int main(int argc, char** argv)
{
	int m[MAXLIN][MAXCOL];
	int i, j, maior = 0;
	// leitura dos valores para a matriz
	printf("... Inicio do PRG ...\n");
	printf("Digite os valores para a matriz m[][]: \n");

	// controle de repeti��o
	for(i = 0; i < MAXLIN; i++){ // externo - linhas
		printf("linha: %d\n",i);
		for(j = 0; j < MAXCOL; j++){ // interno - colunas
			scanf("%d",&m[i][j]);
		}
	}
	
	// apresenta��o da matriz digitada
	for(i = 0; i < MAXLIN; i++){ // externo - linhas
		printf("linha: %d\n",i);
		for(j = 0; j < MAXCOL; j++){ // interno - colunas
			printf("m[%d][%d]: %d\n",i,j,m[i][j]);	
		}
	}
	
	// defini��o do maior
	maior = m[0][0];
	for(i = 0; i < MAXLIN; i++){ // externo - linhas
		printf("linha: %d\n",i);
		for(j = 0; j < MAXCOL; j++){ // interno - colunas
			 if(m[i][j] > maior){
				 maior = m[i][j];
			 }	
		}
	}
	
	printf("Maior elemento = %d\n",maior);
	
	system("PAUSE");
	return 0;
}