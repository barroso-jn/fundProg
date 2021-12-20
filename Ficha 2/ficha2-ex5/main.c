#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    char i;

    printf("Introduza o primeiro numero inteiro: ");
    fflush(stdin);
    scanf("%d", &num1);

    printf("Introduza o segundo numero inteiro: ");
    fflush(stdin);
    scanf("%d", &num2);

    printf("\n\n");
    printf("*********************************************\n");
    printf("* Soma \t\t\t\t%d + %d = %d *\n",num1,num2,num1+num2);
    printf("* Subtracao \t\t\t%d - %d = %d *\n",num1,num2,num1-num2);
    printf("* Multiplicacao \t\t%d x %d = %d *\n",num1,num2,num1*num2);
    printf("* Divisao \t\t\t %d / %d = %d *\n",num1,num2,num1/num2);
    printf("* Resto da divisao inteira \t %d %% %d = %d *\n",num1,num2,num1%num2);
    printf("*********************************************\n");


}
