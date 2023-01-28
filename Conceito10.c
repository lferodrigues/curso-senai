	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	{
	//inicio	
	float vlr,juros,avista;
	printf("Digite o valor do produto: ");
	scanf("%f",&vlr);
	
	//processamento
	juros = vlr * 1.1;
	avista = vlr * 0.95;
	
	
	//saida
	printf("n\-----Resultado-----\n");
	printf("Valor do produto: R$%2.f\n",vlr);
	printf("Valor final a prazo: R$%2.f\n",juros);
	printf("Valor Final a vista: R$%2.f\n",avista);
	
	system("PAUSE");
	return 0;
	
	
	
	}