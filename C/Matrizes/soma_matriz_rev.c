//criar matriz 4x4, soma as colunas colunas pares e impares

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define lin 4
	#define col 4
	
	int m[lin][col], l,c;
	int smp=0,smi=0;
	
	printf("\n\n<<<<INICIATIVA>>>>");
	
	/*
	srand(time(NULL));
	for(i = 0; i < N; i++){  // externo - controle de lina
		for(j = 0; j < M; j++){ // j crescente
   	   	   mat[i][j] = (float)(rand() % 10);
		}
	}
	*/
	for(l = 0; l < lin; l++){ 
		printf("Linha: %d\n",l);
		for(c = 0; c < col; c++){ 
			printf("m[%d][%d]: ",l,c);
		    scanf("%d",&m[l][c]);
		}
	}
		printf("\n");
	printf("\n<<<<Matriz iniciada: >>>>\n");
	for(l=0;l<lin;l++){
			for(c=0;c<col;c++){
				printf("%5d\t",m[l][c]);
			}
			printf("\n\n");
	}
	if(c %2==0){
		smp+=smp+m[c][l];
	}else
	{
		smi+=smi+m[c][l];
	}
	printf("\nO resultado da soma das colunas pares foi: %d",smp);
	printf("\nO resultado da soma das colunas impares foi: %d",smi);
	system("PAUSE");
	return 0;
}