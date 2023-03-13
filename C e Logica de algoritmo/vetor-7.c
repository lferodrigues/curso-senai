	#include <stdio.h>
	#include <stdlib.h>
	
	int main(int argc, char** argv)
	
	{
		#define tam 10
		int v[tam];
		int i, somap =0, somai =0,par=0, impar=0;
		
		for (i=0;i<10;i++){
						printf("Digite um numero: ");
						scanf("%d",&v[i]);
						reverse = reverse + 1
		if (v[i] % 2 == 0){
			par = par + 1;
			somap= somap + v[i];
		}else
			{
				impar = impar + 1;
			somai= somai + v[i]; 	
			}
	}
			
	printf(">>>> RESULTADO <<<<");
	printf("\n Numeros pares digitados %d",par);
	printf("\n Soma dos numeros pares %d", somap);
	printf("\n Numeros impares digitados %d",impar);
	printf("\n Soma dos numeros impares %d\n", somai);
	system("PAUSE");
		return 0;
		
	}