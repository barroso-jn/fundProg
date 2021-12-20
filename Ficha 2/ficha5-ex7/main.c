#include <stdio.h>
#include <stdlib.h>

int distancia();
int preco();
void combustivel(int tipo);

void main(void)
{
    distancia();
    preco();
    combustivel(tipo);
    litros(preco, tipo);
}

int distancia()
{
    int dist;
    printf("Introduza a distância do percurso [Km]: ")
    fflush(stdin);
    scanf("%d", &dist);

    return dist;
}

int preco()
{
    int preco;
    printf("Introduza o montante de combustível gasto [Eur]: ")
    fflush(stdin);
    scanf("%d", &preco);

    return preco;
}

void combustivel(int tipo)
{

    printf("Indique o tipo de combustivel usado [1/2/3]: ")
    if (tipo == 1){
        tipo = 1,944
    } else if (tipo == 2){
        tipo = 1,644
    } else
        tipo = 0,899

    return tipo;
}

void litros(int preco, tipo)
{
    preco_litro = preco/tipo;
    printf("Voce dispendeu %d litros durante a vaigem", preco_litro);
}
