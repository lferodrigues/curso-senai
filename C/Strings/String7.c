#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char frase[100] = {'\n'};
	//int m;
	
	printf("\n >>>Inicio do Prog<<<");
	printf("\n Digite uma palavra: \n");
	fgets(frase, 100, stdin);
	system("PAUSE");
	return 0;
}