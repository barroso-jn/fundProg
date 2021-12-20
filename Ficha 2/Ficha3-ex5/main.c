#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int num1;
    int num2;
    char op;

    printf("Introduza dois numeros inteiros e a operacao a realizar\nNumero 1: ");
    fflush(stdin);
    scanf("%d", &num1);

    printf("Numero 2: ");
    fflush(stdin);
    scanf("%d", &num2);

    printf("Operacao aritmetica: ");
    fflush(stdin);
    scanf("%c", &op);

    switch(op)
    {
    case '* || x':
        printf("Resultado: %d",num1*num2);
        break;
    case '+':
        printf("Resultado: %d",num1+num2);
        break;
    case '- ':
        printf("Resultado: %d",num1-num2);
        break;
    case '/':
        printf("Resultado: %d",num1/num2);
        break;
    case '%':
        printf("Resultado: %d",num1%num2);
        break;
    default:
        printf("Operador desconhecido");
    }


}
