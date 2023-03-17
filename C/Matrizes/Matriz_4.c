#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define LIN 4
	#define COL 4
	int m[LIN][COL], i, j,  cont = 0;

	
	printf("... Inicio de PRG ...\n\n");
	printf("Digitacao dos valores da matriz[][]: \n\n");
	
	// digitação de valores da matriz
	for(i = 0; i < LIN; i++){  
		printf("Linha: %d\n",i);
		for(j = 0; j < COL; j++){ 
			printf("m[%d][%d]: ",i,j);
		    scanf("%d",&m[i][j]);
			}	    
		}
		printf("\n");
	
	
	// apresentação dos valores
	printf("\n\nMatriz digitada: \n");
	for(i = 0; i < LIN; i++){  	
		for(j = 0; j < COL; j++){ 
			printf("%4d\t",m[i][j]);    
		}
		printf("\n");
	}
	printf("\n\n Matriz digitada \n");
for(i = 0; i < LIN; i++){  	
		for(j = 0; j < COL; j++){
			cont++;
			if(i!=j){
				m[i][j]=0;
			
			}
				
				printf("%5.d",m[i][j]);
				printf("- \t");
		
			} 	
				printf("\n");
						
}
		


	return 0;
}	


	
	