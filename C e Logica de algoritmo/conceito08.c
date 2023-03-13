/*
Programa: conceito06.c
Escopo  : cálculo da conta de energia
Autor   : Maurício
Data    : 28/11/2022
Versão  : 1.01
*/
// bibliotecas
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int num, lant, latu, consumo;
	float conta;
	printf("Digite a matrícula.......: ");
	scanf("%d",&num);
	printf("Digite a leitura anterior: ");
	scanf("%d",&lant);
	printf("Digite a leitura atual...: ");
	scanf("%d",&latu);	
	consumo = latu - lant;
	conta = consumo * 0.20725;
	printf("\n\nMatricula.....: %d\n",num);
	printf("Valor da Conta: R$ %f\n",conta);
	printf("Consumo.......: %d KW/h\n",consumo);
	system("PAUSE");
	return 0;
	
}