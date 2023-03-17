
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float altura;
	float peso;
	float imc;
	int ix;
	
	for (ix=0;ix<2;ix++) {
		printf("\n Digite a altura: ");
		scanf("%f",&altura);
		printf("\n Digite o peso: ");
		scanf("%f",&peso);
		imc=peso/(altura*altura);
		
		if(imc>24.0){
		printf("\n Voce esta com sobrepeso!");
	} else {
		printf("\n Seu peso esta adequado!");
	}		
	} 
	

	
	
	system("PAUSE");
	return 0;
}