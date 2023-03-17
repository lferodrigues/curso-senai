#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char text[41];
	int num= 0, let = 0, esp = 0, out = 0, ix = 0;
	
	printf(">>> Inicio do Prog<<<<\n\n");
	printf("Digite a String: ");
	fgets(text,40,stdin);
	
	for(ix=0; text[ix] !='\0'; ix++){
		if(isalpha(text[ix]) !=0){
			let++;
		} else if(isdigit(text[ix]) !=0){
			num++;
		}else if(isspace(text[ix]) !=0 && text[ix] != '\n'){
			esp++;
		} else
		{
			out++;
		
	 }
	}
	
	printf("Tamanho da String: %d\n",strlen(text)-1);
	printf("Total de letras: %d \n",let);
	printf("Total de num: %d \n",num);
	//printf("Tamanho da String: %d\n",strlen(text)-1);
	printf("Total de espaços: %d \n",esp);
	printf("Total de outs: %d \n",out);
	
	
	system("PAUSE");
	return 0;
}