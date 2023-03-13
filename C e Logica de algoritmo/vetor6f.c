	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	
	
	int main(int argc, char** argv)
	{
		
	#define tam 5
	float b[tam];
	int a[tam];
	int i;	
	
	printf("... Inicio do PRG ...\n\n");
	printf(">>>Digite um numero para A[]<<<.\n");
	for	(i=0;i<tam;i++){
	printf("\tDigite um numero; ");
	scanf("%d",&a[i]);
	}
	
	printf("\n>>>>RESULT<<<<\n");
	for	(i=0;i<tam;i++){	
	b[i] = sqrt(a[i]);
	printf("%d e raiz quadrada de %.2f\n",a[i],b[i]);
	
	}
	
	
	return(0);

	}