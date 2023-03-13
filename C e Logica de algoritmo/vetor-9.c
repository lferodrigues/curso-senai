	#include <stdio.h>
	#include <stdlib.h>
	int main(int argc, char** argv)
					
					{
						#define tam 11
						int v[tam];
						int i,n;
						
						printf("Digite um numero; ");
						scanf("%d",&n);
						printf("-----Resultado----");
						for	(i=0;i<tam;i++){
							v[i]=n*i;
							printf("\n o valor do vetor %d e: %d",i,v[i]);
						}
						printf("\n");
					system("PAUSE");
					return(0);
					}				
					
				
				
				