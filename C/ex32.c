//notas

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int num, n100, n50, n10, n5, n1, resto;
	
	printf("Digite um valor em reais: ");
	scanf("%d",&num);
	
	n100 = num / 100;
	resto = num - (n100 * 100);
	n50 = resto / 50;
	resto = resto - (n50 * 50);
	n10 = resto / 10;
	resto = resto - (n10 * 10);
	n5 = resto / 5;
	resto = resto - (n5 * 5);
	n1 = resto / 1;
	
	printf("TROCOS\n\n");
	printf("Notas de 100: %d\n\n", n100);
	printf("Notas de 50: %d\n\n", n50);
	printf("Notas de 10: %d\n\n", n10);
	printf("Notas de 5: %d\n\n", n5);
	printf("Notas de 1: %d\n\n", n1);

	   system("PAUSE");	
	return 0;
}