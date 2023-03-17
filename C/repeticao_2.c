#include <stdlib.h>
#include <stdio.h>

	int main(int argc, char** argv)
	{
		int num,i;
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (num>1000 && num<=1500){
			for(i=1;num<1500;i++){
				if(num%2==0){
					printf("\n %d",num);
					num++;
				} else{
					num++;
				}
				
			}
		}
			
	system("PAUSE");
		return 0;
	}