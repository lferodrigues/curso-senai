	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
	#define tam 10
	int v[tam], i,x = 0,y=0,cont = 0;
	
	
	for	(i=0;i<tam;i++){
	printf("Digite um numero; ");
	scanf("%d",&v[i]);
	
	}
	printf("\n Digite um valor para x...:");
	scanf("%d",&x);
	printf("\n----Resultado-----");
	
	if( x<0 || x>tam ){
	printf("\n O valor do vetor %d não foi encontrado.",x);	
	}else {
	do{
	cont++;
	}while(v[i]=x);
	
	
		
	
	}
	
	
		printf("\n O valor do vetor %d foi encontrado na posicao  :%d",v[x],x);
	printf("\n A quantidade de vezes do numero %d foi apresentado foi de : %d",x,cont);
	
	return 0;
}
