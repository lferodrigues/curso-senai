	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	int main(int argc, char** argv)
	{
	char str1[21] ;
	char str2[21] ;
	int ix,iy=0;
	
	printf("----------Inicio-------------");
	printf("\n Digite a primeira string de nome: ");
	gets(str1);
	printf("\n Digite a segunda string de nome: ");
	fgets(str2,20,stdin);
	
	for (ix=0;ix<strlen(str1);ix++){
	if(str1[ix] != str2[ix]) {
		iy = 1;
	} else
	{
		iy = 0;
	}
	
	}
	printf("\n-----Resultado-----");
	if (iy ==1){
	printf("\nAs strings digitadas sao diferentes");
	} else
	{
	printf("\nAs strings digitadas sao igual");
	
	}
	
	
	return 0;
}