// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Lê um número e diz se este positivo,negativo ou nulo
#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int num;

	printf("Digite seu numero: \n");
	scanf("%d", &num);

	if (num > 0) {
		printf("Seu numero eh Positivo\n");
	}
	else if (num < 0) {
		printf("Seu numero eh Negativo\n");
	}
	else {
		printf("Seu numero eh Nulo\n");
	}


	return 0;
}