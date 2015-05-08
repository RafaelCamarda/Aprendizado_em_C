// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Lê o peso do usuario, a altura e informa a sua situação de acordo com o imc
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {

	float peso, altura, imc;

	printf("Digite seu peso \n");
	scanf("%f", &peso);

	printf("Digite sua altura \n");
	scanf("%f", &altura);

	imc = (peso / pow(altura, 2));

	printf("Seu IMC: %.2f \n", imc);

	if (imc < 17) {
		printf("Muito abaixo do peso\n");
	}
	else if (imc > 17 && imc < 18.49) {
		printf("Abaixo do peso\n");
	}
	else if (imc > 18.49 && imc < 24.99) {
		printf("Peso normal\n");
	}
	else if (imc > 24.99 && imc < 29.99) {
		printf("Acima do peso\n");
	}
	else if (imc > 29.99 && imc < 34.99) {
		printf("Obesidade I \n");
	}
	else if (imc > 34.99 && imc < 39.99) {
		printf("Obesidade II (SEVERA) \n");
	}
	else {
		printf("Obesidade III (Morbida)\n");
	}


	return 0;
}