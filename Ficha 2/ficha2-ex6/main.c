#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float sal;
    float car;
    float vol;
    float per;
    float car2;
    float com;
    per=1.50;
    sal=600;

    printf("Indique o numero de carros vendidos: ");
    fflush(stdin);
    scanf("%f", &car);

    printf("\nIndique o volume faturado: ");
    fflush(stdin);
    scanf("%f", &vol);

    printf("\nVENCIMENTO: \n");
    printf("Salario Base:\t\t\t%.2f\n",sal);
    printf("Por Carro Vendido:\t\t%.2f\n",car2=car*100);
    printf("1.50%% das Vendas Faturadas:\t%.2f\n",com=(vol*per)/100);
    printf("\t\t\t\t--------\n");
    printf("TOTAL: \t\t\t\t%.2f",sal+car2+com);

}
