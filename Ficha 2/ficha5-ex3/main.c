#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(void)
{
    char op;

    printf("Introduza a operacao que pretende efetuar:\nSoma [S]\nSubtracao [s]\nRaiz Quadrada [r]\nPotencia [p]\nSair [x] \n");
    fflush(stdin);
    scanf("%c", &op);

    switch(op)
        {
        case 'S':
            soma();
            break;
        case 's':
            subtraccao();
            break;
        case 'r':
            raiz_quadrada();
            break;
        case 'p':
            potencia();
            break;
        case 'x':
            exit(0);
            break;
        default:
            printf("\nERRO!! Introduza uma opcao valida!\n\n");
            system("cls");
            main();
        }

}

int le_numero()
{
    int num;

    printf("\nInsira o numero : ");
    fflush(stdin);
    scanf("%d", &num);


    return(num);
}

int soma()
{
    int num1 = le_numero();
    int num2 = le_numero();

    printf("\nA soma de %d e %d e igual a %d\n",num1,num2,num1+num2);

    continuar();

}

int subtraccao()
{
    int num1 = le_numero();
    int num2 = le_numero();

    printf("\n\nA subtraccao de %d e %d e igual a %d\n",num1,num2,num1-num2);

    continuar();
}

int raiz_quadrada()
{
    int num1 = le_numero();

    printf("\n\nA raiz quadrada de %d e %.1f\n", num1,sqrt(num1));

    continuar();
}

int potencia()
{
    int num1 = le_numero();
    int num2 = le_numero();
    int num3 = pow(num1,num2);

    printf("\n\nA potencia de %d^%d e %d", num1,num2, num3);

    continuar();
}
continuar()
{
    char op;

    printf("\nDeseja continuar? [y/n]\n");
    fflush(stdin);
    scanf("%c",&op);

    switch(op)
    {
    case 'n':
        exit(0);
        break;

    default:
        system("cls");
        main();
    }
}

