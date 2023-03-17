/*
Programa: mat03.c
Escopo  : criar e ler matriz 3x3 digitar um n�mero pesquis�-lo mostrar 
          ocorr�ncia e quantidade de vezes que foi encontrado
Autor   : Maur�cio
Data    : 03/02/2023
Vers�o  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXLIN 3
#define MAXCOL 3

int main(int argc, char** argv)
{
	int m[MAXLIN][MAXCOL];
	int i, j, n, c = 0, flag = 0, maior = 0;
	// leitura dos valores para a matriz
	printf("... Inicio do PRG ...\n");
	printf("Digite os valores para a matriz m[][]: \n");

	// controle de repeti��o
	for(i = 0; i < MAXLIN; i++){ // externo - linhas
		printf("linha: %d\n",i);
		for(j = 0; j < MAXCOL; j++){ // interno - colunas
			scanf("%d",&m[i][j]);
		}
	}
	
	// apresenta��o da matriz digitada
	for(i = 0; i < MAXLIN; i++){ // externo - linhas
		printf("linha: %d\n",i);
		for(j = 0; j < MAXCOL; j++){ // interno - colunas
			printf("m[%d][%d]: %d\n",i,j,m[i][j]);	
		}
	}
	
	// digita n�mero a ser pesquisado
	printf("\n\nDigite um numero para pesquisa: ");
	scanf("%d",&n);
	
	// pesquisa do n�mero
	printf("\n\nPROCESSO DE PESQUISA DO NUMERO...\n");
	for(i = 0; i < MAXLIN; i++){
		for(j = 0; j < MAXCOL; j++){
			if(m[i][j] == n){
				printf("Numero encontrado em: m[%d][%d]\n",i,j);
				//c++;
				flag++;
			}
		}
	}
	
	if(flag == 0){
		printf("Total de ocorrencias: %d\n",flag);
		printf("Nao foi encontrado na Matriz o numero digitado!\n");
	} else {
		printf("Total de ocorrencias: %d\n",flag);
	}
	system("PAUSE");
	return 0;
}