// Rafael F. Camarda
// Universidade Federal de Ouro Preto

// Calculo das raízes de uma equação de segundo grau.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b,c,delta;
    float x1,x2;

    printf("Digite o valor de a: \n");
    scanf("%d",&a);

    printf("Digite o valor de b: \n");
    scanf("%d",&b);

    printf("Digite o valor de c: \n");
    scanf("%d",&c);
    
    //Cálculo do valor de delta
    delta = (b*b) - (4*a*c);

    printf("Valor de delta: %d",delta);

    if(delta < 0){
        printf("\nDelta negativo, nao existe raiz real\n");
    }
    else{
	//Cálculo das raízes.
        x1 = (-b + sqrt(delta))/2;
        x2 = (-b - sqrt(delta))/2;

	printf("\nO valor da primeira raiz e: %.2f",x1);
    	printf("\nO valor da segunda raiz e: %.2f",x2);
    }

    
    return 0;
}
