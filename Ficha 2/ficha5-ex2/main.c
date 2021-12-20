#include <stdio.h>
#include <stdlib.h>

char menu();
cicloWhile();
cicloDoWhile();

int main()
{
    int num;
    printf("Introduza um numero: ");
    fflush(stdin);
    scanf("%d", &num);

    menu();
}

char menu()
{
    char opcao;

    printf("\nMenu de opcoes\n\n");
    printf("(W) ciclo while\n\n");
    printf("(D) ciclo do...while\n\n");
    printf("(F) ciclo for\n\n");
    printf("(S) sair\n\n");
    printf("\t OPCAO -> \n\n");
    scanf("%c", opcao);



    switch(opcao)
    {
        case 'w': cicloWhile();
                break;
        case 'd': cicloDoWhile();
                break;
        /*case 'f': cicloFor();
                break;
        case 's': sair();
                break;
            default: printf("Introduza uma opcao valida: ");
                    menu();*/
    }


}

cicloWhile(num)
{
    int sum;
    while (num > 0){
        sum = +num;
        num--;
        printf("A soma é %d", sum);
    }
}

cicloDoWhile(num)
{
    int sum;
    do{
        sum = +num;
        num--;
    }
    while(num>0);
}
