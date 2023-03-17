
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main(int argc, char** argv)
{
		#define T 5
		float v[T];
		int	ix,op;
		printf("Digite os valores para o vetor[]");
		for(ix=0;ix<T;ix++){
			printf("vet[%d]: ",ix);
			scanf("%f",vet[ix]);
		}
		printf("Digite sua opcao[a encerra/1 direita/2 inversa/outros-invaldos: \n");
		printf("==> Opcao: ");
		scanf("%d",%op);
		
		if(op==0){
			printf("Fim do PROG. Adieus!!!\n");
		}else if(op==1){
			printf("Vetor na forma direta: \n");
				for(ix=0;ix<T;ix++){
					printf("vet[%d]: %4.2f\t",ix,v[ix]);
				
				}
				printf("\n");
		}else if(op==2){
			printf("Vetor na forma indireta: \n");
				for(ix=T-1;ix>=0;ix--){
					printf("vet[%d]: %4.2f\t",ix,v[ix]);
				
				}
				printf("\n");
		}else
		{
			printf("Opcao invalida.Fim do progarama! \n");
		}
		printf("\n");
		
		system("PAUSE");
		
		
	return 0;
}