#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	#define tam 1000
	int v[tam];
	int ix, soma = 0;
	
    printf("... Inicio do PRG ...\n\n");
	
	printf("vetor v[10 primeiro pares a partir do 0]\n");
	for(ix = 0; ix < tam; ix++){
		// atribuição automática
		v[ix] = ix * 2;
		// soma
		soma = soma + v[ix];
		// apresentação do valor
		printf("v[%d] = %d\n",ix,v[ix]);
	}
	
	printf("... Resultados ...\n\n");
	printf("Soma  = %d\n",soma);
	
		
	system("PAUSE");
	return 0;
}