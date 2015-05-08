// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Lê um número e diz se este é maior que 20

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int num;

	printf("Digite seu numero: \n");
	scanf("%d", &num);

	if (num > 20) {
		printf("Seu numero eh maior que 20\n");
	}
	else {
		printf("Numero menor que 20\n");
	}


	return 0;
}