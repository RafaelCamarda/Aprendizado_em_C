// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Programa para calcular a soma de números de 0 até o número n digitado.
#include <stdlib.h>

int main() {

	int n, soma, i;

	soma = 1;

	printf("Digite o valor de n\n");
	scanf("%d", &n);


	for (i = 0;  i < n ; i++) {
		soma = soma + i ;
	}

	printf("O valor da soma eh : %d\n", soma);
	return 0;
}
