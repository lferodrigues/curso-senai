		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>
		
		int main(int argc, char** argv)
		{
		char str[31] = {'/0'};
		int ix,iy=0;
		
		printf("----------Inicio-------------");
		printf("\n Digite a primeira string de nome: ");
		gets(str);
		
			if(str[0]!=0){
		
				for(ix=0; ix<strlen(str); ix++){
			if (str[ix] == 32){
					iy = iy + 1;
			   	}
			
			}
				printf("O numero de palavaras digitadas foi: %d",iy);
			} else
			{
				printf("Valor invalido!");
			}
		
		return 0;
		}