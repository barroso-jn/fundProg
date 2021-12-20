#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
    srand(time(0));
    int r =(rand() % 26) ;
    int n;
    int t = 1;

    do{
        printf("Tentativas = %d/5\n",t);
        printf("Introduza um numero:\n");
        fflush(stdin);
        scanf("%i", &n);

        if(n<=25 && n>=0){
            if (r==n){
                printf("Parabens - Acertou!\n\n");
                t++;
            }
            else if (r > n){
                printf("Esta abaixo do numero pretendido!\n\n");
                t++;
            }
            else {
                printf("Esta acima do numero pretendido!\n\n");
                t++;
            }
            printf("%d\n\n", r);
            }
        else {
        printf("Introduza um numero entre 0 e 25\n\n");
        t++;
        }
    }
    while(t<6 && r!=n);
    }



