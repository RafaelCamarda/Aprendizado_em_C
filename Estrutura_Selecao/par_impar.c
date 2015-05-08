// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Lê um número e diz se este é par ou impar

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int num;

	printf("Digite seu numero: \n");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("Seu numero eh PAR\n");
	}
	else {
		printf("Seu numero eh IMPAR\n");
	}


	return 0;
}