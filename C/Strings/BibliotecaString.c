	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	int main(int argc, char** argv)
	{
		char st1[51];
		char st2[100];
		char st3[51]="ola mundo!";
		char st4[51]="ola mundo";
		char st5[101]= "Flamengo campeao Mundial!";
		char st6[101];
		
		printf(">>> Inicio do prog.<<<");
		printf("+++Exemplo de funções.+++");
		printf("*** Bazinga ***");
		//strcpy
		printf("--- Utilizando strcpy()\n");
		strcpy(st1,"Exemplo de String");
		printf("String st1: %s\n",st1);
		strcpy(st2," - Ola Mundo!");
		
		//strcat()
		strcat(st1,st2);
		printf("String st1: %s\n",st1);
		
		//strcmp
		printf("Comparando strings utilizando strcmp()\n");
		printf("st3 = %s\n",st3);
		printf("st4=%s\n",st4);
		if(strcmp(st4,st3)>0){
			printf("st4 [%d] e maior que st3.\n",strcmp(st4,st3));
		}else
		{
			printf("st3[%d] e maior que st4.\n",strcmp(st4,st3));
		}
		//strcmpi
		printf("Comparando strings utilizando strcmpi()\n");
		printf("st3 = %s\n",st3);
		printf("st4=%s\n",st4);
		if(strcmp(st4,st3)>0){
			printf("st4 [%d] e maior que st3.\n",strcmp(st4,st3));
		}else if(strcmpi(st4,st3)>0)
		{
			printf("st3 [%d] e maior que st4.\n",strcmp(st4,st3));
		}else
		{
			printf("Sao iguais!\n\n");
		}
		//strupr e strlwr
		printf("String original st5: %s\n",st5);
		printf("String original st5: %s\n",strupr(st5));
		printf("String original st5: %s\n",st5);
		printf("String original st5: %s\n",strlwr(st5));
		printf("String original st5: %s\n",st5);
		strcat(st6,strupr(st5));
		printf("\nString original st5: %s\n",st6);
		printf("String original st5: %s\n",st5);
		
		
		
		
		
		
		
		
		system("PAUSE");
		return 0;
	}