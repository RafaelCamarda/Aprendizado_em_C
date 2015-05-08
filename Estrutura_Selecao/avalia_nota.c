// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Avaliação da nota de alunos
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3,media;

    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);

    printf("Digite a segunda nota\n");
    scanf("%f",&nota2);

    printf("Digite a terceira nota\n");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if( media >= 6.0){
        printf("Passou!\n");
    }
    else{
        if(media >= 5.0 && media < 6.0)
            printf("Direito a fazer prova extra!\n");

        else if(media > 4.0 && media < 5.0)
            printf("Direito a fazer especial!\n");
        else
            printf("Reprovado\n");
    }

    return 0;
}