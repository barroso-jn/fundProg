#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float valor;

    printf("\nIntroduza o valor das compras: ");
    fflush(stdin);
    scanf("%f", &valor);

    if (valor<=500)
        printf("Percentagem de desconto = 0%%\nValor do desconto = %.2f", valor*0);
    else
        if (valor<=1250)
            printf("Percentagem de desconto = 4%%\nValor do desconto = %.2f", valor*0.04);
        else
            if (valor<=2000)
            printf("Percentagem de desconto = 6%%\nValor do desconto = %.2f", valor*0.06);
            else
                 printf("Percentagem de desconto = 8%%\nValor do desconto = %.2f", valor*0.08);


getchar();
}
