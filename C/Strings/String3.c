	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	int main(int argc, char** argv)
	{
		
		char str1[21];
		char str2[20];
		char str3[42];
		
		printf("----Inicio------/n");
		printf("/n Digite o primeiro nome:  ");
		fgets(str1,20,stdin);
		printf("/n Digite o sobrenome:  ");
		gets(str2);
		str3 == str1 ||str2;
		printf("O nome digitado foi: %s",str3);
		
		return 0;
	}
