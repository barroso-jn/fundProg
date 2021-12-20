#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int l1;
    int l2;
    int l3;

    printf("Linha 1: ");
    fflush(stdin);
    scanf("%d",&l1);

    printf("Linha 2: ");
    fflush(stdin);
    scanf("%d",&l2);

    printf("Linha 3: ");
    fflush(stdin);
    scanf("%d",&l3);

    if ( abs(l1 - l2) < l3 && l3 < (l1 + l2)){
        printf("\nE possivel construir o triangulo");
        if(l1==l2&&l2==l3&&l1==l3)
            printf("\nEquilatero");
        else if (l1!=l2&&l1!=l3&&l2!=l3)
            printf("\nEscaleno");
        else
            printf("\nIsosceles");}
    else
        printf("\nNão é possivel construir o triangulo");
}
