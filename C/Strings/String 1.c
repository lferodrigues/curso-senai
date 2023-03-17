	/*
	Programa: string 01
	Escopo  : criar uma string
	
	*/
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int main()
	{
	//variaveis
	char s[256];
	char nome[35];
	char sexo;
	char frase[100];
	int i;
	
	//incluindo as letras
	for	(i=0;i<52;i++){
		s[i]='A'+ i;
	}
	//finaliza a string
	s[i] = 'A' + i;
	
	//apresenta a string
	printf("A String contém:\n");
	printf("%s\n",s);
	
	//apresenta o primeiro caracter da string
	printf("%c\n",s[0]);
	
	//leitura de string usando o gets()
	printf("Digite seu nome: ");
	gets(nome);
	
	//leitura usando scanf
	//printf("Digite uma frase:\n");
	//scanf("%s",frase);
	//printf("\nVocê digitou essa frase:\n%s\n");
	
	//leitura usando scanf e exclusao
	//printf("Digite uma frase:\n");
	//scanf("%[^\n]s",frase);
	//printf("\nVocê digitou essa frase:\n%s\n");
	
	//leitura de string usndo o fgets()
	printf("\" Pare! Digite sua frase.\"\n");
	printf("Digite uma frase:\n");
	fgets(frase, 100, stdin);
	printf("\nVocê digitou essa frase:%s\n");
	printf("\n%s contém %d caracteres.\n\n",frase,strlen(frase)); 
	
	//leitura de string usando scanf definindo opcoes
	printf("Digite uma frase:\n");
	scanf("%[A-Z]s",frase);
	printf("\nVocê digitou essa frase:\n%s\n");
	
	//leituras de caracteres
	printf("Digite o sexo (M-Masculino ou F-Feminino): \n");
	sexo = getchar();
	printf("Sexo: %c\n",sexo);
	
	system("PAUSE");
	return 0;
}
