#include <stdio.h>


int main() {
	// Exibindo vari�veis.
	int num;
	
	// Solicitando dados para o usu�rio.
	printf("Digite um numero:");
	scanf("%i", &num);
	
	// Definindo Antecessor e sucessor.
	printf("Sucessor: %i \n", num+1);
	printf("Antecessor: %i \n", num-1);
	return 0;
}
