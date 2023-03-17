/*
Programa: rev01.c
Escopo  : 
Fa�a um programa que leia v�rios n�meros inteiros positivos e mostre, 
no final, a soma dos n�meros pares e a soma dos n�meros �mpares. 
O programa para quando entrar um n�mero maior que 1000.

Autor   : Maur�cio
Data    : 10/02/2023
Vers�o  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int num, sp = 0, si = 0; 
		
	do{
		printf("Digite um n�mero ou 1000 para sair: ");
		scanf("%d",&num);
		if(num != 1000){
			if(num % 2 == 0){ // par
				sp = sp + num;
			} else { // �mpar
				si = si + num;
			}
		}
	}while(num != 1000);
	
	printf("(=) Soma dos numeros   pares: %d\n",sp);
	printf("(=) Soma dos numeros impares: %d\n",si);
	
	system("PAUSE");
	return 0;
}
