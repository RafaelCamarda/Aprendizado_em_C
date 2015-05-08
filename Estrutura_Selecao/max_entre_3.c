// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Lê 3 números e diz qual é o maior entre eles
#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int num1, num2, num3;

	printf("Digite seu numero 1: \n");
	scanf("%d", &num1);

	printf("Digite seu numero 2: \n");
	scanf("%d", &num2);

	printf("Digite seu numero 3: \n");
	scanf("%d", &num3);

	if (num1 > num2) {
		if (num1 > num3) {
			printf("O maior numero eh o: %d \n", num1);
		}
		else {
			printf("O maior numero eh o: %d \n", num3);
		}
	}
	else if (num2 > num3) {
		printf("O maior numero eh o: %d \n", num2);
	}

	else {
		printf("O maior numero eh o: %d \n", num3);
	}


	return 0;
}