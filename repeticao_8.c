#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int num, ix, resultado = 0;
	
		printf("Digite um numero inteiro maior que 1: ");
		scanf("%d",&num);

	
 	for(ix = 2; ix < num; ix++){
		 if(num % ix == 0){
			 resultado++;
		 }
	}
	
	if(resultado == 0){
		printf("O numero %d e primo!\n",num);
	} else {
		printf("O numero %d NAO e primo!\n",num);
	}
	
	system("PAUSE");
	return 0;
}