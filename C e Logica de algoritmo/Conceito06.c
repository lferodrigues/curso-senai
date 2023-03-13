#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	
	float tmp,tmp1;
	printf("Digite o valor de C.....:");
	scanf("%f",&tmp);
	
	
	tmp1 = tmp * 1.8 + 32;
	
	
	printf(" O resultado da coversao e...: %f\n", tmp1);
	system("PAUSE");
	return 0;
}