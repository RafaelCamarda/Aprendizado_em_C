// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Este programa converte graus celsius para fahrenheit

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	float tempc, tempf;

	printf("Digite o valor da temperatura em celsius: \n");
	scanf("%f", &tempc);

	tempf = ((9 * tempc) + 160) / 5;

	printf("A temperatura em fahrenheit %.2f \n", tempf);


	return 0;
}