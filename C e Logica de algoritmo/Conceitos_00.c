//blbliotecas
#include <stdlib.h>
#include <stdio.h>

int isso_e_uma_funcao(){
	printf("Funcao criada e executada!\n");
	return 0;
}

int isso_e_outra_funcao (){
	printf("Exemplo de outra funcao!\n\n");
	return 0;
}

int main(int argc, char** argv)
{
	printf("Exemplo de uso de funcoes. \n\n");
	isso_e_uma_funcao();
	isso_e_outra_funcao();
	system("pause") ;
	return 0;
}