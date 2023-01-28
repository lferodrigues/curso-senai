#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	float f, i;
	//printf("Digite o grau em celsius: ");
	//scanf("%f",&c);
	
		for (i=10;i<=100;i++)	{
				f=i*1.8+32;
				printf("\n  %.2f em graus celsius e equivalente ha %.2f em fahrenheit",i,f);
		}
	return 0;
}