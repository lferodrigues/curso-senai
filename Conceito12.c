	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
		int n1,n2;
		printf("Digite um numero: ");
		scanf("%d",&n1);
		if(n1>90 && n1<100) {
			n2=n1*2;
			printf("O dobro do numero %d e: %d",n1,n2);
		} else
		{
		 printf("O numero digitado nao atende os requisitos");	
		}
		
		return 0;
	}