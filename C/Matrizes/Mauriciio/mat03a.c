/*
Programa: mat03a.c
Escopo  : 
- Criar um programa em C onde:
- Criar uma matriz de 3 x 3 (3 linhas e 3 colunas);
- Ler os valores para as posições da matriz;
- Apresentar os valores digitados.
- Informar a soma e a média dos números pares digitados.
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
	int m[LIN][COL], i, j,  cont = 0;
	float soma = 0.0, media = 0.0;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Digitacao dos valores da matriz[][]: \n\n");
	
	// digitação de valores da matriz
	for(i = 0; i < LIN; i++){  // externo - controle de lina
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&m[i][j]);
		    if(m[i][j] % 2 == 0){
				soma = soma + m[i][j];
     		    cont++;	
			}	    
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
	
	
	if(cont > 0){
		media = soma / cont;
	} 
	printf("\n\nResultados: \n");
	printf("Soma dos valores  pares digitados: %6.2f\n", soma);
	printf("Quantidade  de valores pares ....: %6d\n", cont);
	printf("Media dos valores pares digitados: %6.2f\n", media);
	system("PAUSE");
	return 0;
}
