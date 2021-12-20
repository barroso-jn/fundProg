#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int num;
    int soma;
    soma = 0;

    printf("Introduza um numero[de 1 a 10]: ");
    fflush(stdin);
    scanf("%d", &num);

    switch(num){
        case 10:
            soma = soma + 10;

        case 9:
            soma = soma + 9;

        case 8:
            soma = soma + 8;

        case 7:
            soma = soma + 7;

        case 6:
            soma = soma + 6;

        case 5:
            soma = soma + 5;

        case 4:
            soma = soma + 4;

        case 3:
            soma = soma + 3;

        case 2:
            soma = soma + 2;

        case 1:
            soma = soma + 1;

    }

    printf("O resultado da soma ate %d e: %d ", num, soma) ;
}

