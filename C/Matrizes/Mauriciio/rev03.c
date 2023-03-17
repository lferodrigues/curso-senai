/*
Programa: rev03.c
Escopo  : 
Faça um programa em C que calcula e escreve a seguinte soma: 
soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

Autor   : Maurício
Data    : 10/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	
	int ix, num = 1, den = 1;
	float resultado, media = 0.0;
		
	for(ix = 1; ix <= 50; ix++){
		resultado += (float)num/(float)den;
		// resultado =  resultado +  media;
		num = num + 2;
		den++;
	}
	
	printf("(=) Resultado: %f\n",resultado);
	
	system("PAUSE");
	return 0;
}
