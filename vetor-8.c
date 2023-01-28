		#include <stdio.h>
			#include <stdlib.h>
			
			int main(int argc, char** argv)
			
			{
				#define tam 6
				int v[tam];
				int i, reverse = 0;
				
				for	(i=0;i<tam;i++){
					printf("Digite um numero: ");
					scanf("%d",&v[i]);
					reverse = reverse + 1;
				}
				printf("----Resultado----");
	        reverse--;
			for	(i=0;i<tam;i++){
				printf("\n O %d foi: %d ",reverse,v[reverse]);
				reverse --;
			}
				system("PAUSE");
				return 0;	
			}
		
			