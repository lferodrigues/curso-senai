	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
	int y=0,n=0;
	int i;	
	printf("... Início do PRG ...\n\n");
	printf("Digite o tamanho do vetor: \n");
	scanf("%d",&y);
	#define tam y
	int v[tam];
	
	for	(i=0;i<tam;i++){	
	printf("Digite um numero: ");
	scanf("%d",&v[i]);
	
	if(v[i] % 2 == 0){
	v[i] = v[i] + 2;
	}
	
	
	}
	printf("\n>>>>RESULT<<<<");
	for	(i=0;i<tam;i++){
	printf("\n O valor do vetor %d e....: %d",i,v[i]);
	} 
	
	
	
	return(0);
	}
	
