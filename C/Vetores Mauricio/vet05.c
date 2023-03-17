/*
Programa: 
Escopo  : 
Autor   : 
Data    : 16/12/2022
Versão  : 1.01
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define v 10
	int valor[v];
	int soma = 0;
	int i, par = 0, impar = 0, qpar = 0, qimpar = 0;
	//atribuicao
	for(i=0;i<10;i++){
	    printf("Digite um numero[%d] = ",i);
	    scanf("%d",&valor[i]);
	    if (valor[i] % 2 == 0){
    	    par  = par + valor[i];
			qpar = qpar + 1;		
		} else {
			impar  = impar + valor[i];
			qimpar = qimpar + 1;
		}
	}	
	
	printf("\n\nPares:\n");
	printf("Soma dos pares digitados: %d\n",par);
	printf("Qtde dos pares digitados: %d\n",qpar);
	
	printf("\n\nImpares:\n");
	printf("Soma dos impares digitados: %d\n",impar);
	printf("Qtde dos impares digitados: %d\n",qimpar);
	    	       
	system("PAUSE");
	return 0;
}