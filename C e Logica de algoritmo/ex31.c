//leia distancia em km, e a qnt litrs consumidos. calcule se e economico

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{	
	float km, lit, cons = 0.0;
	
	printf("Digite a distancia percorrida: ");
	scanf("%f",&km);
	printf("Quantos litros foram consumidos: ");
	scanf("%f",&lit);
	
	
	if ((km > 0) && (lit > 0)) {
		cons = km / lit;

	
	if (cons < 8) {
		printf("\n\nAlto consumo\n");
		printf("Faz %.2fkm por litro\n",cons);
	} 		else if (cons <= 14) {
				printf("\n\nEconomico\n");
				printf("Faz %.2fkm por litro\n",cons);
			} else {
				  printf("\n\nSuper Economico\n");
				  printf("Faz %.2fkm por litro\n",cons);
		       }
      
	} else {
		printf("voce digitou valores invalidos\n\n");
	}
	
	system("PAUSE");
	return 0;
}