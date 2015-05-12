// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Programa para calcular a soma de números enquanto o usuário desejar digitar.
#include <stdio.h>
#include <stdlib.h>

int main() {

    float num, soma;

    char op;

    soma = 0;

    do {

        printf("Digite um numero: \n");
        scanf("%f", &num);

        soma = soma + num;

        getchar();
        printf("Deseja continuar [s] - sim, [n] - nao: \n");
        scanf("%c", &op);

    } while (op == 's');

    printf("O valor da soma : %.2f\n", soma);

    return 0;
}
