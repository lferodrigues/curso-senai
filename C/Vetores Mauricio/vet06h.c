/*
Programa: vet06h.c
Escopo  : criar 2 v[3] int ler os valores (distintos) informar soma, menor,
          maior e qual posição e vetor foi digitado. 
Autor   : Maurício
Data    : 19/01/2023
Versão  : 1.01
*/

// bibliotecas
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	#define tam 3
	int   a[tam];
	int   b[tam];
	int   ix = 0, s = 0, menor = 0, maior = 0;
	int   pmenor = 0, pmaior = 0, vmenor = 0, vmaior = 0;
	float m = 0.0;
	
	// leitura de v[a]
	printf("Digite o valor de a[]:\n");
	while(ix < tam){
		printf("Digite o valor de a[%d]: ",ix);
		scanf("%d",&a[ix]);
		// menor
		if(a[ix] < menor || ix == 0){
			menor  = a[ix];
			pmenor = ix;
			vmenor = 1;
		}
		// maior
		if(a[ix] > maior || ix == 0){
			maior  = a[ix];
			pmaior = ix;
			vmaior = 1;
		}
		s = s + a[ix];
		ix++;
	}
	
	// leitura de v[b]
	ix = 0;
	printf("\n\nDigite o valor de b[]:\n");
	while(ix < tam){
		printf("Digite o valor de b[%d]: ",ix);
		scanf("%d",&b[ix]);
		// menor
		if(b[ix] < menor){
			menor  = b[ix];
			pmenor = ix;
			vmenor = 2;
		}
		// maior
		if(b[ix] > maior){
			maior  = b[ix];
			pmaior = ix;
			vmaior = 2;
		}
		s = s + b[ix];
		ix++;	
	}
	
	// saídas
	m = (float)s/(tam * 2);
	printf("-------------------\n");
	printf("Menor: %d\n",menor);
	printf("Digitado no vetor [%d] no elemento [%d]\n",vmenor,pmenor);
	printf("-------------------\n");
	printf("Maior: %d\n",maior);
	printf("Digitado no vetor [%d] no elemento [%d]\n",vmaior,pmaior);
	printf("-------------------\n");
	-
	system("PAUSE");
	return 0;
}