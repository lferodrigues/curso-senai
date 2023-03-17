/*
Programa: rev04.c
Escopo  : 
- criar uma matriz 4x4
- ler o valores
- somar colunas pares e ímpares
Autor   : Maurício
Data    : 09/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define LIN 3
	#define COL 3
	int ma[LIN][COL], i, j, sp = 0, si = 0;
	
	printf("... Inicio de PRG ...\n\n");
	
	// gerar elementos para a matriz
	for(i = 0; i < LIN; i++){  // externo - controle de lina
		for(j = 0; j < COL; j++){ // j crescente
			printf("Digite o elemento ma[%d][%d]: ",i,j);
		    scanf("%d",&ma[i][j]);
		    if(j % 2 == 0){ // para
				sp += + ma[i][j];
			} else {
				si += + ma[i][j];
			}
		}
	}
	
	// apresentação dos valores
	printf("\n\nMatriz ma[][] digitada: \n");
	for(i = 0; i < LIN; i++){  // externo - controle de lina	
		for(j = 0; j < COL; j++){ // externo - controle de colunas
			printf("%4d\t",ma[i][j]);    
		}
		printf("\n");
	}
	
	printf("Soma dos numeros das colunas   pares: %d\n",sp);
	printf("Soma dos numeros das colunas impares: %d\n",si);
	

	system("PAUSE");
	return 0;
}
