/*
Programa: rev00.c
Escopo  : 
Faça um programa em C que calcula o produto dos números digitados pelo 
usuário. O programa em C deve permitir que o usuário digite uma 
quantidade não determinada de números. O programa em C encerra quando 
o usuário digita o valor zero.

Autor   : Maurício
Data    : 10/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int num, prod = 1;
	
	do{
		printf("Digite um número ou zero para sair: ");
		scanf("%d",&num);
		if(num != 0){
			prod = prod * num;
		}
	}while(num != 0);
	
	printf("(=) Produto dos números digitados: %d\n",prod);

	system("PAUSE");
	return 0;
}
