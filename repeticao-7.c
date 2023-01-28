	#include <stdio.h>
	#include <stdio.h>
	
	int main(int argc, char** argv)
	{
		float t,a=1,b=50;
		int i;
		t=0;
		for(i = 1;i<10;i++)
		{
			t= t+(a+i)/(b-i);
		}
		printf("%f",t);
		return 0;
	}
