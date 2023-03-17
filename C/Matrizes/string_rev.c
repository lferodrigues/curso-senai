//crie um string de 30 posicoes e leia, nos indicies divisives por 3, colocar o valor X,
 //e apresentar string nova,antiga e nova denv
 
 #include "bazinga.h"
 
 
 int main(int argc, char** argv)
 {
 	char str[30] = {'/0'};
	 int ix,iy=0;
	 printf("... Inicio de PRG ...\n\n");
	printf("Digite a string: ");
	fgets(str,30,stdin);
	
	for(ix=0; ix<strlen(str); ix++){
	 printf("%c",str[ix]);	 	
	}
	printf("\n\n");
	for(ix=0; ix<strlen(str); ix++){
		if(ix%3==0){
			str[ix]='X';
		}
	}
	printf("\n O resultado da string é: ");
	for(ix=0; ix<strlen(str); ix++){
	 printf("%c",str[ix]);	 	
	}
	printf("\n\n");
	 system("PAUSE");
	 return 0;
 }