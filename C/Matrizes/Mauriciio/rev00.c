/*
Programa: rev00.c
Escopo  : 
Fa�a um programa em C que calcula o produto dos n�meros digitados pelo 
usu�rio. O programa em C deve permitir que o usu�rio digite uma 
quantidade n�o determinada de n�meros. O programa em C encerra quando 
o usu�rio digita o valor zero.

Autor   : Maur�cio
Data    : 10/02/2023
Vers�o  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int num, prod = 1;
	
	do{
		printf("Digite um n�mero ou zero para sair: ");
		scanf("%d",&num);
		if(num != 0){
			prod = prod * num;
		}
	}while(num != 0);
	
	printf("(=) Produto dos n�meros digitados: %d\n",prod);

	system("PAUSE");
	return 0;
}
