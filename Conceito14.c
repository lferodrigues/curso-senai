		#include <stdio.h>
		#include <stdlib.h>
		
		int main(int argc, char** argv)
		{
			int cod;
			float sal,ir,inss,liqu;
			
			printf("Digite o codigo do funcionario: \n");
			scanf("%d",&cod);
			printf("Digite o salario do funcionario: \n");
			scanf("%f",&sal);
			
			if(sal<500.01) {
			 ir=sal*0.02;
			 inss=sal*0.03;
			 liqu=sal-inss-ir;	
			} else
			{
				if(sal>500.01 && sal<950.00){
				ir=sal*0.05;
			 	 inss=sal*0.04;
			 	 liqu=sal-inss-ir;	
					
				} else
				{
				ir=sal*0.07;
			 inss=sal*0.06;
			 liqu=sal-inss-ir;	
				}
			}
			printf("\n\n-----------Resultado------------");
			printf("\n\n Codigo do funcionario: %d",cod);
			printf("\n\n Salario Bruto........: %f",sal);
			printf("\n\n INSS.................: %f",inss);
			printf("\n\n IR...................: %f",ir);
			printf("\n\n Total a receber......: %f",liqu);
			printf("\n\n");
			
			system("PAUSE");
			return 0;
		}