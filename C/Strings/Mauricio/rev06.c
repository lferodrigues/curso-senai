/*
Programa: rev06.c
Escopo  : 
- Faça um programa que leia um vetor de 5 posições para números reais e, 
  depois, um código inteiro. 
- Se o código for zero, finalize o programa; 
- Se for 1, mostre o vetor na ordem direta; 
- Se for 2, mostre o vetor na ordem inversa; 
- Caso, o código seja diferente de 1 e 2 escreva uma mensagem 
  informando que o código é  inválido e encerre o programa.
Autor   : Maurício
Data    : 09/02/2023
Versão  : 1.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	#define T 5
	float v[T];
	int ix, op;
	
	//leitura do vetor
	printf("Digite os valores para o vetor: \n");
	for(ix = 0; ix < T; ix++){
		printf("vet[%d]: ",ix);
		scanf("%f",&v[ix]);
	}
	
	printf("Digite sua opcao[0 encerra / 1 direta / 2 inversa / outros - invalido: \n");
	printf("==> Opcao: ");
	scanf("%d",&op);
	
	if(op == 0){ // finaliza
		printf("Fim de PRG. Ate mais!!!\n");
	} else if (op == 1){ // direta
		printf("Vetor na forma direta: \n");
		for(ix = 0; ix < T; ix++){
			printf("vet[%d]: %4.2f\t",ix,v[ix]);
		}
		printf("\n");
	} else if (op == 2){ // inversa
		printf("Vetor na forma INVERSA: \n");
		for(ix = T-1; ix >= 0; ix--){
			printf("vet[%d]: %4.2f\t",ix,v[ix]);
		}
		printf("\n");
	} else { // inválido
		printf("Opcao invalida. Fim de PRG!\n");
	}
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}