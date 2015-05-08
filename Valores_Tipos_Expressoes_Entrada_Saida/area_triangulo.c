// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Este programa calcula e exibe a área de um trianguo.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float area, base, altura;

	printf("Digite o valor da base: \n");
	scanf("%f", &base);

	printf("Digite o valor da altura: \n");
	scanf("%f", &altura);

	area = ((base * altura) / 2);

	printf("A area do seu triangulo eh %.2f \n", area);


	return 0;
}