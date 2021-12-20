#include <stdio.h>
#include <stdlib.h>
/*1.3 Solicitar um número ao utilizador e mostrar esse número no ecrã.*/

void main(void)
{
    int numero;

    printf("Indique um numero: ");

    fflush(stdin);
    scanf("%d", &numero);

    printf("O numero que escolheu foi o %d", numero);

    getchar();

}
