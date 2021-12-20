#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int num;

    printf("Introduza um numero inteiro: ");
    fflush(stdin);
    scanf("%d", &num);

    if (num!=0){
        if (num%2==0)
        printf("\nNumero par");
    else
        printf("\nNumero Impar");
    }
    else
        printf("\nNumero nulo");

    if (num!=0){
        if (num<0)
        printf("\nNumero negativo");
    else
        printf("\nNumero positivo");
    }

    getchar();






}
