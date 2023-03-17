#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define M 3
#define N 3

int main(int argc, char** argv)
{
	float mat[N][M];
	float vet[N];
	float soma= 0.0,media = 0.0;
	int i,j;
	
	printf("... Inicio do PRG ...\n");
	printf("Matriz gerada automaticamente: \n");
	srand(time(NULL));
	for(i = 0; i < N; i++){ // externo - linhas
		for(j = 0; j < M; j++){//externo coluna
			mat[i][j]=(float)(rand()%10);
		}
	}
	
	//apresentacao dos valores
	printf("\n\nMatriz mat[][] gerada automaticamente: \n");
	for(i = 0; i < N; i++){ // externo - linhas
		soma= 0.0;
		media=0.0;
		for(j = 0; j < M; j++){//externo coluna
			printf("%4.2f\t",mat[i][j]);
			soma=soma+mat[i][j];
		}
		media=soma/M;
		printf("Media = %4.2f",media);
		vet[i] = media;
		printf("\n");
	}
	// apresentação do vetor
	printf("\n\nMedia dos alunos: \n");
	for(i = 0; i < N; i++){
		printf("Aluno[%d]: %4.2f ",i,vet[i]);
	}
	printf("\n\n");
	
	
	system("PAUSE");
	return 0;
}