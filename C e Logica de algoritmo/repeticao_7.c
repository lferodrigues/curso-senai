	#include <stdlib.h>
	#include <stdio.h>
	
	int main(int argc, char** argv)
	{
		
		float a,b,pa,pb;
		int i;
		
		printf("----Inicio de programa----");
		i=1;
		a=90.000;
		b=200.000;
		while(a<b)
		{
			pa=a*0.03;
			a=a+pa;
			pb=b*0.015;
			b=b+pb;
			i++;
		}
		printf("\n O pais A sera maior ou igual ao pais B em: %d anos",i);
		return 0;
	}
