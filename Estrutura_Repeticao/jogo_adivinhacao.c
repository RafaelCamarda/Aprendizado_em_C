// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Jogo da adivinhação
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	srand(time(NULL));

	int tentativas_jogador_1 = 0;
	int tentativas_jogador_2 = 0;
	int vez = 1;
	int numero;

	int num_sorteado = rand() % 1000;

	printf("%d", num_sorteado);

	printf("\n---------JOGO DA ADIVINHACAO-----\n");

	do {
		if (vez == 1) {
			printf("\nJogador 1, digite o numero: ");
			scanf("%d", &numero);

			if (numero != num_sorteado) {
				if (num_sorteado > numero) {
					printf("\nO numero sorteado é maior que %d ", numero);
				}
				else {
					printf("\nO numero sorteado é menor que %d ", numero);
				}
				vez = 2;
			}
			else {
				printf("\nO jogador 1 ganhou!!!\n");
			}
			tentativas_jogador_1++;
		}
		else if (vez == 2) {
			printf("\nJogador 2, digite o numero: ");
			scanf("%d", &numero);

			if (numero != num_sorteado) {
				if (num_sorteado > numero) {
					printf("\nO numero sorteado é maior que %d ", numero);
				}
				else {
					printf("\nO numero sorteado é menor que %d ", numero);
				}
				vez = 1;
			}
			else {
				printf("\nO jogador 2 ganhou!!!\n");
			}

			tentativas_jogador_2++;
		}

	} while (numero != num_sorteado);

	printf("\nNumero: %d\n", num_sorteado);
	printf("\nNumero de tentativas do jogador 1: %d\n", tentativas_jogador_1);
	printf("\nNumero de tentativas do jogador 2: %d\n", tentativas_jogador_2);


	return 0;
}