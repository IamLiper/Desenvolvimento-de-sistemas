#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Exibindo vari�veis.
	int primeiroNumero, segundoNumero, media;
	
	// Solicitando dados ao usu�rio.
	printf("Digite o primeiro valor: ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &segundoNumero);
	
	media = (primeiroNumero + segundoNumero)/2;
	
	printf("\n=== Resultado === \n");
	printf("\nPrimeiro valor: %i \n", primeiroNumero);
	printf("\nSegundo valor: %i \n", segundoNumero);
	printf("\nM�dia: %i", media);
	
	return 0;
}
