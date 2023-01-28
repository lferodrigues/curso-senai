	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
		int num, ix, iy, resultado = 0;
		
		printf("... Inicio do PRG ...\n\n");
		
			printf("Digite um numero inteiro maior que 1: ");
			scanf("%d",&num);
		
	 	for(ix = 2; ix <= num; ix++){ 
			 resultado = 0;
			 for(y = 2; y < ix; y++){ 
				 if(ix % y == 0){
					 resultado++;
				 }
			 }
			 if(flag == 0){
			 	printf("O numero %d e primo!\n",iy);
			 } 
		}
		
		
		
		system("PAUSE");
		return 0;
	}