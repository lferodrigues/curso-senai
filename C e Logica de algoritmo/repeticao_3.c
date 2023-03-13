	#include <stdlib.h>
	#include <stdio.h>
	int main(int argc, char** argv)
	{
		int ls, li,i ;
		
		printf("Digite o limite inferior: \n");
		scanf("%d",&li);
		printf("Digite o limite superior: \n");
		scanf("%d", &ls);
	
			for (i=li;i<=ls;i++)	{
				if(i%2==0){
				printf("\n %d", i);	
		}	
		}
			
	
	system("PAUSE");
		return 0;
		}
	