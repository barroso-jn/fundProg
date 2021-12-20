#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415



void areaTriangulo(int t, int r, int c, int q);
void areaCirculo(int t, int r, int c, int q);
void reaQuadrado(int t, int r, int c, int q);
void areaTriangulo(int t, int r, int c, int q);

void menu(int t, int r, int c, int q);

void main(void)
{
    menu(0,0,0,0);
}



void menu(int t, int r, int c, int q)
{
    char opcao;

    printf("\t\tCalculo de areas\n\n");
    printf("Triangulo: %d\t\t\tRetangulo: %d\n\nCirculo:  %d\t\t\tQuadrado: %d\n\n", t, r, c, q);
    printf("OPCOES\n\n\t(T)riangulo\n\n\t(R)ectangulo\n\n\t(Q)uadrado\n\n\t(C)irculo\n\n\t(F)im\n\nSelecione opcao:\n");
    fflush(stdin);
    scanf("%c",&opcao);
    system("cls");

    switch(opcao)
    {
        case 't':
            t++;
            areaTriangulo(t,r,c,q);

            break;
        case 'r':
            r++;
            areaRectangulo(t,r,c,q);
            break;
        case 'q':
            q++;
            areaQuadrado(t,r,c,q);
            break;
        case 'c':
            c++;
            areaCirculo(t,r,c,q);
            break;
        default:
            exit(0);

    }

}

void areaTriangulo(int t, int r, int c, int q)
{
    int l1, l2;

    printf("Introduza o valor da altura: \n");
    fflush(stdin);
    scanf("%d", &l1);

    printf("Introduza o valor da base: \n");
    fflush(stdin);
    scanf("%d", &l2);


    printf("A area do triangulo e %d \n", ((l1*l2)/2));


    menu(t,r,c,q);


}

void areaRectangulo(int t, int r, int c, int q)
{
    int l1, l2;

    printf("Introduza o valor da altura: \n");
    fflush(stdin);
    scanf("%d", &l1);

    printf("Introduza o valor da base: \n");
    fflush(stdin);
    scanf("%d", &l2);


    printf("A area do rectangulo e %d \n", (l1*l2));
    fflush(stdin);
    getchar();

    menu(t,r,c,q);

}

void areaQuadrado(int t, int r, int c, int q)
{
    int l1;

    printf("Introduza o valor do lado: \n");
    fflush(stdin);
    scanf("%d", &l1);




    printf("A area do quadrado e %d ", (l1*l1));
    menu(t,r,c,q);

}
void areaCirculo(int t, int r, int c, int q)
{
    int l1;
    int area;

    printf("Introduza o valor do raio: \n");
    fflush(stdin);
    scanf("%d", &l1);

    area = PI * l1 * l1;

    printf("A area do circulo e %d ", area);
    menu(t,r,c,q);
}




