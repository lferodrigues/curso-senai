#include <stdlib.h>
#include <stdio.h>


int main(int argc, char** argv)
{
	int num,ix;
	
	printf("Tabuada usando repetição \n");
	printf("Tabuada usando while/do \n\n");
	printf("Digite o numero da tabuada:");
	scanf("%d",&num);	
	
	ix = 1;
	while(ix <= 10)
	{
		printf("\n%3d * %3d = %3d",ix,num,ix*num);
		ix++;
	}
	
	printf("\n\nTabuada usando repetição \n");
	printf("Tabuada usando do/while \n\n");
	printf("Digite o numero da tabuada:");
	scanf("%d",&num);	
	
	ix = 1;
    do{
		printf("\n%3d * %3d = %3d",ix,num,ix*num);
		ix++;
	} while(ix<=10);
			
			
	printf("\n\nTabuada usando repetição \n");
	printf("Tabuada usando for \n\n");
	printf("Digite o numero da tabuada:");
	scanf("%d",&num);	
	
	for	(ix=1;ix<=10;ix++){
		printf("\n%3d * %3d = %3d ",ix,num,ix*num);
	}		
			
	
	system("PAUSE");
	return 0;
}