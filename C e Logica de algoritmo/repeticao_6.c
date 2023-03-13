	#include <stdlib.h>
	#include <stdio.h>
	
	int main(int argc, char** argv)
	{
		int num, i,exp,resultado;
		
		printf("Digite a base: ");
		scanf("%d", &num);
		printf("Digite o expoente: ");
		scanf("%d", &exp);
		
		resultado=1;
		
		for	(i=1;i<=exp;i++){
			resultado=resultado*num;
			}
			
		printf("%d elevado a %d potencia e: %d",num,exp,resultado);
		
		system("PAUSE");
		return 0;
	}