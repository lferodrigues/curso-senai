	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
		
	
	int n1,n2,n3;
	printf("Digite um numero: \n");
	scanf("%d",&n1);
		printf("Digite um numero: \n");
	scanf("%d",&n2);
		printf("Digite um numero: \n");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3) {
		printf("O maior numero digitado foi o primeiro: %d",n1);
	} else{
		
	if(n1>n2 && n1>n3) {
		printf("O maior numero digitado foi o primeiro: %d",n2);
	} else
	{
	printf("O maior numero digitado foi o terceiro: %d",n3);	
	}
	}
	
	}