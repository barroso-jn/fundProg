#include <stdio.h>
#include <stdlib.h>
/*1.3 Solicitar um n�mero ao utilizador e mostrar esse n�mero no ecr�.*/

void main(void)
{
    int numero;

    printf("Indique um numero: ");

    fflush(stdin);
    scanf("%d", &numero);

    printf("O numero que escolheu foi o %d", numero);

    getchar();

}
