#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Declarando vari�veis.
	float valorP, valorF;
	
	// Solicitando dados ao usu�rio.
	printf("Informe o valor do produto: ");
	scanf("%f", &valorP);
	
	// Calculando...
	valorF = valorP + (valorP * 0.1);
	
	printf("O valor final do produto e = %f", valorF);
	
	return 0;
}
