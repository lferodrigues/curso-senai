/*
Programa: vet06b.c
Escopo  : vetor de 8 inteiros, ler x e y, apresentar v[x] e v[y] e a sua soma e
          a sua multiplicação
Autor   : Maurício
Data    : 19/01/2023
Versão  : 1.01
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 8
	// variáveis
	int v[tam];
	int ix, x = 0, y = 0, s = 0, p = 0;
	//int ix, x, y, s, p;	
	printf("... Início do PRG ...\n\n");
	printf("Digite os valores para v[]\n");
	
	// leitura dos valores do vetor
	for(ix = 0; ix < tam; ix++){
		printf("Digite o valor de v[%d]: ",ix);
		scanf("%d",&v[ix]);
	}
	
	// apresentação dos valores do vetor
	printf("\n\nValores digitados para v[]\n");
	for(ix = 0; ix < tam; ix++){
		printf("v[%d]: %d\n",ix,v[ix]);
	}
	
	// leitura de x e y
	printf("\n\nDigite o indice do vetor para determinar os valores: \n");
	do {
		printf("\nDigite o valor de x: ");
		scanf("%d",&x);
		printf("Digite o valor de y: ");
		scanf("%d",&y);
		printf("-------------------");	
	}while(x < 0 || x > tam || y < 0 || y > tam );
	
	s = v[x] + v[y];
	p = v[x] * v[y];
	
	printf("\nValores selecionados: \n");
	printf("v[%d] = %d\n",x,v[x]);	
	printf("v[%d] = %d\n",y,v[y]);
	printf("v[%d] + v[%d] = %d\n",x,y,s);
	printf("v[%d] * v[%d] = %d\n",x,y,p);

/*	
	if(x < 0 || x > tam || y < 0 || y > tam ){
		printf("Valores invalidos para os indices!\n");
	} else {
	    s = v[x] + v[y];
		p = v[x] * v[y];
		
		printf("\nValores selecionados: \n");
		printf("v[%d] = %d\n",x,v[x]);	
		printf("v[%d] = %d\n",y,v[y]);
		printf("v[%d] + v[%d] = %d\n",x,y,s);
		printf("v[%d] * v[%d] = %d\n",x,y,p);	
	}
*/	
	system("PAUSE");
	return 0;
}