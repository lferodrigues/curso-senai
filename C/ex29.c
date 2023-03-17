// ano bissexto. divisível por 400, n divisivel por 100. sao divisiveis por 400

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int ano;
	
	printf("****INICIO DO PROGRAMA****\n\n");
	printf("Digite um ano: ");
	scanf("%d",&ano);
	
	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
		printf("\n\nO ano %d e bissexto\n\n",ano);
	}	 // else if (ano % 400 == 0) {
			//   	printf("\n\nO ano %d e bissexto\n\n",ano);
		//}
			else {
				printf("\n\nO ano %d nao e bissexto\n\n",ano);
			}
			
    printf("****FIM DO PROGRAMA****\n\n");
		
	system("PAUSE");	
	return 0;
}