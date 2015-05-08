// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Este programa calcula a media de 3 numeros

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int a, b, c;
	float media;

	printf("Digite o valor de A: \n");
	scanf("%d", &a);

	printf("Digite o valor de B: \n");
	scanf("%d", &b);

	printf("Digite o valor de C: \n");
	scanf("%d", &c);

	media = (a + b + c) / 3;

	printf("Valor da media: %.2f\n", media);

	return 0;
}