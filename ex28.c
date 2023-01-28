#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	int idade;
	
	printf("Digite a idade: \n");
	scanf("%d",&idade);
	
	if (idade < 0) {
		printf("Você digitou uma idade inválida\n");
	} else if (idade <= 2) {
		printf("Recem nascido\n");
	} else if (idade <= 11) {
		printf("Crianca\n");
	} else if (idade <= 19) {
		printf("Adolescente\n");
	} else if (idade <= 55) {
		printf("Adulto\n");
	} else {
		printf("Idoso\n");
	}
	
	system("PAUSE");
	return 0;
}