#include <stdio.h>
#include <stdlib.h>

int prod(int x,int y,int z){
	return x* y * z;
}

int main(int argc, char** argv)
{
	int saida = prod(15,8,10);
	printf("A saida = %d\n",saida);
	return 0;
}