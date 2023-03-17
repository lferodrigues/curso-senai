/*
Programa: conceito-se-03.c
Escopo  : programa��o condicional (se/sen�o/se)
Autor   : Maur�cio
Data    : 06/12/2022
Vers�o  : 1.01
*/

// bibliotecas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	// vari�veis
	float n1, n2, m = 0.0;
	// entrada
	printf("... Inicio do PRG ...\n");
	printf("Digite n1: ");
	scanf("%f",&n1);
	printf("Digite n2: ");
	scanf("%f",&n2);
	
	// processamento
	m = (n1 + n2)/2;
	
	// sa�da
	if (m < 5){
		printf("Media = %f\n",m);
		printf("Aluno Reprovado!\n\n");	
	} else {
		if (m < 7) {
			printf("Media = %f\n",m);
     		printf("Aluno esta em Prova Final!\n\n");	   	
		} else {
			printf("Media = %f\n",m);
     		printf("Aluno Aprovado!\n\n");	
		}
	}
	

	return 0;
}