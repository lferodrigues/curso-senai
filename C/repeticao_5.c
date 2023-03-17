		#include <stdlib.h>
		#include <stdio.h>
		
		int main(int argc, char** argv)
		{
			int num,par, impar, i;
			
			printf("Digite um numero: \n");
			scanf("%d",&num);
			i=1;
			par=1;
			impar=1;
			while(i <= num)	
			{
			 if	(i % 2==1){
			 	if(i != num) {
					printf("%3d\t",i); 
				 } else
				 {
					 printf("%3d\n",i);
				 }
			 }else
			 {
			 printf("%3d\n",i);		 
			 }
			 i++;
			}
			printf("\n");
			system("PAUSE");
		return 0;
		}