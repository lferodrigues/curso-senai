/*
Programa: mat11a.c
Escopo  : 
- Criar uma matriz de 5 x 8 (5 linhas e 8 colunas);
- Ler um X qualquer (inteiro e postivo);
- Gerar uma matriz zigue-zague a partir deste número (inclusive)
- Apresentar os valores;
Autor   : Maurício
Data    : 09/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define LIN 5
	#define COL 8
	int ma[LIN][COL], i, j, num, cont;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Digite o numero inicial da matriz zig-zag: ");
	scanf("%d",&num);
	
	cont = num;	
	// gerar elementos para a matriz
	for(i = 0; i < LIN; i++){  // externo - controle de lina
		if(i % 2 == 0){ // linha é par
			for(j = 0; j < COL; j++){ // j crescente
			    ma[i][j] = cont;
			    cont++;
			}
		} else { // linha é impar
			for(j = COL -1; j >= 0; j--){ // j decrescente
				ma[i][j] = cont;
			    cont++;
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
	
	
	
	

	system("PAUSE");
	return 0;
}
