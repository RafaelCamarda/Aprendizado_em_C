// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Este programa troca o valor de duas variaveis

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int a, b, temp;

	printf("Digite o valor de A: \n");
	scanf("%d", &a);

	printf("Digite o valor de B: \n");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("Novo valor de A: %d\n", a);
	printf("Novo valor de B: %d\n", b);


	return 0;
}