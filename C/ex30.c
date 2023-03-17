//3 lados e informe se as medidas podem virar um triangulo

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int l1, l2, l3;
	printf("Digite o primeiro lado: ");
	scanf("%d",&l1);
	printf("Digite o segundo lado: ");
	scanf("%d",&l2);
	printf("Digite o terceiro lado: ");
	scanf("%d",&l3);
	
	if (l1 + l2 < l3 || l2 + l3 < l1 || l1 + l3 < l2) {
		printf("Nao possivel virar um triangulo");
	} else {
		printf("E possivel virar um triangulo");
	}
	
	system("PAUSE");
	return 0;
}