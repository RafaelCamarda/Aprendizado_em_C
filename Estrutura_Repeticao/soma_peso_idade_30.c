// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Programa que soma o peso de pessoas com mais de 30 anos de idade, enquanto o usuário desejar continuar.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade, i, qtd;
    float peso, soma;

    char op;

    soma = 0;

    do {

        printf("Digite a idade: \n");
        scanf("%d", &idade);

        printf("Digite o peso: \n");
        scanf("%f", &peso);

        if (idade > 30) {
            soma = soma + peso;
        }

        getchar();

        printf("Deseja continuar [s] - sim, [n] - nao: \n");
        scanf("%c", &op);
    } while (op == 's');

    printf("O valor do pesos : %.3f\n", soma);

    return 0;
}
