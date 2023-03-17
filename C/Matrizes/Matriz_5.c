
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define LIN 5
	#define COL 5
	int m[LIN][COL], i, j;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Digitacao dos valores da matriz[][]: \n\n");
	
	// digitação de valores da matriz
	for(i = 0; i < LIN; i++){ 
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ 
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	
	// apresentação dos valores
	printf("\n\nMatriz digitada: \n");
	for(i = 0; i < LIN; i++){ 
		for(j = 0; j < COL; j++){
			printf("%5d\t",m[i][j]);    
		}
		printf("\n");
	}
	
	
	// apresentação dos valores
	printf("\n\nDIAGONAL PRINCIPAL da Matriz digitada: \n");
	for(i = 0; i < LIN; i++){ 	
		for(j = 0; j < COL; j++){ 
			if(i >= j){
				printf("%5d\t",m[i][j]);
				
			} else {
				printf(" \t");
			}    
		}
		printf("\n");
	}
	

	system("PAUSE");
	return 0;
}
