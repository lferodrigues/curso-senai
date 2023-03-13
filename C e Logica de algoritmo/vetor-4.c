			#include <stdio.h>
			#include <stdio.h>
			
			int main(int argc, char** argv)
			{
				float media=0;
				int vector[5],soma=0,maior=1,menor;
				int i;
				for (i=0;i<5;i++){
					printf("Digite um numero: ");
					scanf("%d",&vector[i]);
				}
				printf("\n -Resultado-\n");
				for (i=0;i<5;i++){
					printf("Vetor[%d], tem o valor de %d \n",i,vector[i]);
					soma= soma + vector[i];
					
					if (vector[i] > maior){
						maior = vector[i];
					} else{
						menor=vector[i];
					}
					}
					media = soma/i;
					printf("soma total: %d ",soma);
					printf("\n media total: %.2f",media);
					printf();
					
				return 0;
			}