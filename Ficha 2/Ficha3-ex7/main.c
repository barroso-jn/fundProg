#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int num1;
    int num2;
    int num3;
    char ord;

    printf("Introduza tres numeros inteiros\nNumero 1:" );
    fflush(stdin);
    scanf("%d", &num1);

    printf("Numero 2:");
    fflush(stdin);
    scanf("%d", &num2);

    printf("Numero 3:");
    fflush(stdin);
    scanf("%d", &num3);

    printf("Indique a ordenacao (C)rescente ou (D)ecrescente: ");
    fflush(stdin);
    scanf("%c", &ord);

    if (ord == "C"){
        if (num1 < num2 && num1<num3){
            if(num2<num3){
                printf("%d %d %d", num1, num2, num3);
            }
            else{
                printf("%d %d %d", num1, num3, num2);
            }
        }
        else if (num2<num1 && num2< num3){
            if(num1<num3){
                printf("%d %d %d", num2, num1, num3);
                }
            else{
                printf("%d %d %d", num2, num3, num1);
                }
        }
        else{
            if(num1<num2){
                printf("%d %d %d", num3,num1,num2);
                    }
            else{
                printf("%d %d %d", num3, num2, num1);
            }
        }
}
    else {
    if (num1 < num2 && num1<num3){
        if(num2<num3){
            printf("%d %d %d", num3, num2, num1);
        }
        else{
            printf("%d %d %d", num2, num3, num1);
        }
    }
    else if (num2<num1 && num2< num3){
        if(num1<num3){
            printf("%d %d %d", num3, num1, num2);
            }
        else{
            printf("%d %d %d", num1, num3, num2);
            }
    }
    else{
        if(num1<num2){
            printf("%d %d %d", num2,num1,num3);
                   }
        else{
            printf("%d %d %d", num1, num2, num3);
        }
    }
}
}


