	#include "bazinga.h"
	
	#define COL 3
	#define LIN 3
	
	int main(int argc, char** argv)
	{
	int m[LIN][COL];
	int i,j,x=0,flag=0,ix=0;

	//Entrada:
	printf(">>>INICIO DO PROG <<<");
	printf("\nDigite os valores para a matriz m[][]:\n");
	
	for(i=0;i<LIN;i++){
		printf("linha: %d\n",i);
		for(j=0;j<COL;j++){
			scanf("%d",&m[i][j]);
		}
	}
	//Processamento:
	printf("Digite o valor procurado: ");
	scanf("%d",&x);
	printf("\n-----RESULTADO-------\n");
	for	(i=0;i<LIN;i++){
		if(m[i][j] == x){
		}
		for(j=0;j<COL;j++){
				if(m[i][j] == x){
					
			printf("Valor encontrado no elemento m[%d] [%d]\n",i,j);
				flag=0;
				ix++;
			
		} else{
			flag=1;
		}
		
		}
	}
	
	//Saida:
	if(flag==1){
		printf("Valor não encontrado!\n");
	} else{
			printf("Total de ocorrencias: %d\n",ix);
	}
		
	system("PAUSE");
	return 0;
}