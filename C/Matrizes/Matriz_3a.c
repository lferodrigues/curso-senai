	#include "bazinga.h"
	#define COL 3
	#define LIN 3
	
	int main(int argc, char** argv)
	{
	int m[LIN][COL];
	int i,j,cont=0;
	float media=0,soma=0;
	printf("----INICIO------\n");
	
	printf("\nDigite os valores para a matriz m[][]:\n");
	
	for(i=0;i<LIN;i++){
		printf("linha: %d\n",i);
	for(j=0;j<COL;j++){
		scanf("%d",&m[i][j]);
		}
	}
	
    for(i = 0; i < LIN; i++){ 
		printf("linha: %d\n",i);
		for(j = 0; j < COL; j++){ 
			printf("m[%d][%d]: %d\n",i,j,m[i][j]);	
			}
		}
	
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			if(m[i][j] %2==0){
				soma= soma + m[i] [j];
			
				cont++;
			}
		}
	}
	
	media=soma/cont;
	
	printf("\n -----Resultado-----\n");
	printf("A soma dos valores pares e: %6.2f\n",soma);
	printf("\n A media dos valores pares e: %6.2f",media);
				
	return 0;
}