
#include "bazinga.h"
#define MAXLIN 3
#define MAXCOL 3

int main(int argc, char** argv)
{
	int m[MAXLIN][MAXCOL];
	int i,j,maior;
	//leitura dos valores para a matriz
	printf(">>>INICIO DO PROG <<<");
	printf("Digite os valores para a matriz m[][]:\n");
	
	//controle de repetição
	for(i=0;i<MAXLIN;i++){//externo-coluna
		printf("linha: %d\n",i);
		for(j=0;j<MAXCOL;j++){
			scanf("%d",&m[i][j]);
		}
	}
	//apresentação da matriz digitada
	for(i=0;i<MAXLIN;i++){//externo - linha
		printf("linha: %d\n",i);
		for(j=0;j<MAXCOL;j++){//externa- coluna
			printf("m[%d][%d]: %d\n",i,j,m[i][j]);
		}
		
	}//defina o maior
	maior = m[0][0];
	for(i=0;i<MAXLIN;i++){//externo - linha
		printf("linha: %d\n",i);
		for(j=0;j<MAXCOL;j++){//externa- coluna
			if(m[i][j]>maior){
				maior = m[i][j];
			}
		}
		
	}
	printf("Maior elemento = Lá ele... %d\n",maior);
	system("PAUSE");
	return 0;
}