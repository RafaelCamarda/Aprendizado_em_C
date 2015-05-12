// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Programa com uma espécie de calculadora com as funções soma e subtraçao.
#include <stdio.h>
#include <stdlib.h>

int main() {

    char op;

    float num1, num2;

    do {
        printf("\n[a] - SOMAR\n");
        printf("\n[b] - SUBTRAIR\n");
        printf("\n[z] - SAIR\n");
        printf("Digte a opcao: ");
        scanf("%c", &op);

        switch (op) {

        case 'a':
            printf("\nNumero 1:");
            scanf("%f", &num1);

            printf("\nNumero 2:");
            scanf("%f", &num2);

            printf("SOMA: %.2f", num1 + num2);
            break;

        case 'b':
            printf("\nNumero 1:");
            scanf("%f", &num1);

            printf("\nNumero 2:");
            scanf("%f", &num2);

            printf("SUBTRACAO: %.2f", num1 - num2);
            break;

        case 'z':
            break;

        default:
            printf("Entre com uma opcao valida!!\n");
            break;
        }

        getchar();
        printf("\nPressione qualquer tecla para continuar");
        getchar();
    } while (op != 'z');





    return 0;
}
