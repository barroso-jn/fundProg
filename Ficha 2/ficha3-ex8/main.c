#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int cat;
    int dep;
    int sal1;
    int sal2;
    int sal3;
    int a;

    sal1 = 600;
    sal2 = 750;
    sal3 = 1000;

    printf("Introduza a sua categoria [1/2/3]\:\n");
    fflush(stdin);
    scanf("%d", &cat);


    printf("Introduza o numero de dependentes:\n");
    fflush(stdin);
    scanf("%d", &dep);


    if (cat == 1){
        if (dep <= 1){
            printf("%d\n", sal1);
            printf("O seu salario e de %.0f\n", sal1 + (sal1 * 0.05));
        } else
            printf("O seu salario e de %d", sal1 + (sal1 * 0.09));
    } else if (cat == 2){
        if (dep <= 1){
            printf("O seu salario e de %d", (sal2 + (sal2*0.03)));
        } else
            printf("O seu salario e de %d", sal2 + (sal2*0.07));
    }
    else {
        if (dep <= 3){
            printf("O seu salario e de %d", (sal3  + (sal3*0.02)));
        } else
            printf("O seu salario e de %d", sal3 + (sal3*0.05));
    }

}
