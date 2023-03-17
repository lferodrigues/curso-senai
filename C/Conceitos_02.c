#include <stdio.h>
#include <stdlib.h>
int confere_idade(int idade) {
	if (idade >=18) {
		printf("e maior ou igual do que 18 .\n");
	} else {
		printf("e menor do que 18.\n");
	}
	return 0;
}



int main(int argc, char** argv)
{
	int idade1 = 10;
	int idade2 = 12;
	int idade3 = 20;
	confere_idade(idade1);
	confere_idade(idade2);
	confere_idade(idade3);
	
	return 0;
	
	}
	