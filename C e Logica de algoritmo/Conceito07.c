#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	//entrada
	int num;
	int div,quad;
	printf("Digite um numero....:");
	scanf("%d",&num);
	//processamento
	quad = num * num;
	div = quad % 6;
	if (div == 0){
		printf("O quadrado de um numero %d, e divisivel por 6\n" ,num);
	} else {
	printf("O quadrado de um  numero %d, nao e divisivel por 6\n" ,num);	
	}
	//saida
	system("PAUSE");
	return 0;
}