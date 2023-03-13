	#include <stdio.h>
	#include <stdio.h>
	
	int main(int argc, char** argv)
	{
		int num,i=1;
		 
		printf("---incio---\n\n");
		printf("Digite um numero..:");
		scanf("%d",&num);
		while(i<num)
		{
			printf("%d em decimal %o em octal %X em hexadecimal\n",i,i,i);
			i++;
		}
		
		return 0;
	}