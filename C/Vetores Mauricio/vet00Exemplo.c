/*
Programa: vet00Exemplo.c
Escopo  : cria��o, leitura e escrita de elementos de um vetor[5]
          soma e m�dia dos elementos
Autor   : Maur�cio
Data    : 19/01/2023
Vers�o  : 1.01
*/

// bibliotecas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	// constante 
	#define tam 5
	// vari�veis
	int v[tam];
	int ix, s = 0;
	float m = 0;
	
	// leitura dos valores via teclado
	printf("... Inicio PRG de Vetores - Exemplo ...\n\n");
	printf("Digite os valores para o vetor[]\n");
	for(ix = 0; ix < tam; ix++){
		printf("Digite o valor para v[%d]: ",ix);
		scanf("%d",&v[ix]);
		s = s + v[ix];
	}
	
	// apresenta��o do vetor
	printf("\n\nValores digitados para vetor[]:\n");
	for(ix = 0; ix < tam; ix++){
		printf("v[%d]: %d\n",ix,v[ix]);
	}
	
	// resultados de soma e m�dia
	m = s / 5.0;
	printf("Soma  dos elementos do vetor[]: %d\n",s);
	printf("Media dos elementos do vetor[]: %f\n",m);
	system("PAUSE");
	return 0;
}