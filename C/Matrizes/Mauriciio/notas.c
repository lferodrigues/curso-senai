/*
Programa: notas.c
Escopo  : 
- criar um programa em C onde:
- Nome do arquivo: notas.c
- Criar uma matriz onde estejam relacionados N alunos e M notas.
- Criar um vetor de N posi��es. 
- Em rela��o � matriz, gerar aleatoriamente (entre 0 e 10, exclusive) as M notas de cada aluno.
- Gerar as m�dias de cada aluno e guard�-las no vetor criado.
- Apresentar as m�dias de cada aluno no final.

Autor   : Maur�cio
Data    : 09/02/2023
Vers�o  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	#define N 3
	#define M 3
	
	float mat[N][M];
	float vet[N];
	float soma = 0.0, media = 0.0;
	int i, j;
	
	printf("... Inicio de PRG ...\n\n");
	printf("Matriz gerada automaticamente: ");
	
	srand(time(NULL));
	// gerar elementos para a matriz
	for(i = 0; i < N; i++){  // externo - controle de lina
		for(j = 0; j < M; j++){ // j crescente
   	   	   mat[i][j] = (float)(rand() % 10);
		}
	}
	
	// apresenta��o dos valores
	printf("\n\nMatriz mat[][] gerada automaticamente: \n");
	for(i = 0; i < N; i++){  // externo - controle de lina	
		soma  = 0.0;
 		media = 0.0;
		for(j = 0; j < M; j++){ // externo - controle de colunas
			printf("%4.2f\t",mat[i][j]);  
			soma = soma + mat[i][j];  
		}
		media = soma / M;
		printf("Media = %4.2f",media);
		vet[i] = media;
		printf("\n");
	}
	
	// apresenta��o do vetor
	printf("\n\nMedia dos alunos: \n");
	for(i = 0; i < N; i++){
		printf("Aluno[%d]: %4.2f ",i,vet[i]);
	}
	printf("\n\n");
	
	

	system("PAUSE");
	return 0;
}
