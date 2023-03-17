	#include <stdio.h>
	#include <stdlib.h>
	

	int main(int argc, char** argv) {
	
	#define tam 8
	int v[tam];
	int i,n,x = 0,y = 0,soma=0;
	
	for	(i=0;i<tam;i++){
	printf("Digite um numero; ");
	scanf("%d",&v[i]);
	
	}
	
	printf("Digite um posicao...:");
	scanf("%d",&x);
	printf("Digite uma posicao...:");
	scanf("%d",&y);
	soma=v[x]+v[y];
	
	printf("\n----Resultado-----");
	
	printf("\n A posicao %d , corresponde ao valor: %d",x,v[x]);
	printf("\n A posicao %d , corresponde ao valor: %d",y,v[y]);
	printf("\n A soma dos valores e: %d",soma);
	
	printf("\n");
	system("PAUSE");
	return(0);
	
	}				
					