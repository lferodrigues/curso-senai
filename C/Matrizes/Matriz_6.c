
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define LIN 3
	#define COL 3
	int m[LIN][COL],n[LIN][COL],o[LIN][COL], i, j;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Digitacao dos valores da matriz 1[][]: \n\n");
	
	// digitação de valores da matriz
	for(i = 0; i < LIN; i++){ 
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ 
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
		printf("Digitacao dos valores da matriz 2[][]: \n\n");
		for(i = 0; i < LIN; i++){ 
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ 
			printf("n[%d][%d]: ",i,j);
		    scanf("%d",&n[i][j]);
		}
		printf("\n");
	}
	printf("----Resultado---");
	
	
	//calculo
	for(i = 0; i < LIN; i++){ 
		for(j = 0; j < COL; j++){
			o[i][j]= m[i][j] + n[i][j];   
		}
		printf("\n");
	}
	
	// apresentação dos valores
	printf("\nMatriz calculada: \n");
	for(i = 0; i < LIN; i++){ 
		for(j = 0; j < COL; j++){
			printf("%5d\t",o[i][j]);    
		}
		printf("\n");
	}
	

	system("PAUSE");
	return 0;
}
