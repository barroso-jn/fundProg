#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{

    float numero;

    printf("Introduza um valor real: ");

    fflush(stdin);
    scanf("%f",&numero);

    printf("\n\n%.3f \t\talinhado a esquerda\n",numero);
    printf("%+3f \t\talinhado a esquerda com sinal\n",numero);
    printf("%20.3f \talinhado a direita\n",numero);
    printf("%020.3f \talinhado a direita antecedido de zeros\n",numero);

    getchar();
}
