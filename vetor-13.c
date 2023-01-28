	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
	#define tam 5
	int v[tam],a=0,b=0,c=0;
	int i;	
	
	printf("... Início do PRG ...\n\n");
	printf(">>>Digite um numero para A[]<<<.\n");
	for	(a=0;a<tam;a++){
	printf("\tDigite um numero; ");
	scanf("%d",&v[a]);
	}
	printf(">>>Digite um numero para B[]<<<.\n");
	for	(b=0;b<tam;b++){
	printf("\tDigite um numero; ");
	scanf("%d",&v[b]);
	}
	for	(i=0;i<tam;i++){	
	v[i]=v[a]+v[b];
	
	}
	printf("\n>>>>RESULT<<<<");
	for	(c=0;c<tam;c++){
	printf("\n O valor do vetor %d e....: %d",c,v[c]);
	}
	return(0);
	
		
	}
	
