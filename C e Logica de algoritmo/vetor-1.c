		#include <stdio.h>
		#include <stdio.h>
		
	int main(int argc, char** argv)
	{
		int nota[4];
		int ix;
		
		for (ix=0;ix<4;ix++)
		{
			printf("Digite uma nota: ");
			scanf("%d",&nota[ix]);
		}
		for (ix=0;ix<4;ix++)
		{
		printf("nota[%d]: %d\n",ix,nota[ix]);	
		}
		
		
		return 0;
	}