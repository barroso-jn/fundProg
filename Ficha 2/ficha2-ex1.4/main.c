#include <stdio.h>
#include <stdlib.h>
/*1.4 Calcular o dobro de um valor inteiro introduzido pelo utilizador.*/

void main(void)
{
    int numero;

    printf("Indique um numero: ");

    fflush(stdin);
    scanf("%d", &numero);

    printf("O dobro do numero que escolheu e %d x 2 = %i", numero, numero*2);

    getchar();

}
