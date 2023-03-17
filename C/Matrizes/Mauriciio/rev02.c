/*
Programa: rev01.c
Escopo  : 
Escreva um programa em C que lê 15 valores reais, encontra o maior e o 
menor deles e mostra o resultado.
Autor   : Maurício
Data    : 10/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	#define N 4
	int ix;
	float num, menor = 0.0, maior = 0.0;
		
	for(ix = 1; ix <= N; ix++){
		printf("Digite um numero: ");
		scanf("%f",&num);
		if(num < menor || ix == 1){ // menor
			menor = num;
		}
		if(num > maior || ix == 1){ // menor
			maior = num;
		}
	}
	
	printf("(=) Menor: %f\n",menor);
	printf("(=) Maior: %f\n",maior);
	
	system("PAUSE");
	return 0;
}
