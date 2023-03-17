/*
Programa: rev01.c
Escopo  : 
Faça um programa que leia vários números inteiros positivos e mostre, 
no final, a soma dos números pares e a soma dos números ímpares. 
O programa para quando entrar um número maior que 1000.

Autor   : Maurício
Data    : 10/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int num, sp = 0, si = 0; 
		
	do{
		printf("Digite um número ou 1000 para sair: ");
		scanf("%d",&num);
		if(num != 1000){
			if(num % 2 == 0){ // par
				sp = sp + num;
			} else { // ímpar
				si = si + num;
			}
		}
	}while(num != 1000);
	
	printf("(=) Soma dos numeros   pares: %d\n",sp);
	printf("(=) Soma dos numeros impares: %d\n",si);
	
	system("PAUSE");
	return 0;
}
