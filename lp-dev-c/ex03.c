#include <stdio.h>


int main() {
	
	// Exibindo vari�veis.
	int num, par, impar;
	
	// Solicitando dados para o usu�rio.
	printf("Digite um numero:");
	scanf("%i", &num);
	
	// determinando Par ou Impar.
	if(num %2 == 0){
		printf("Par\n");
	} else{
		printf("Impar\n");
	}
	return 0;
}
