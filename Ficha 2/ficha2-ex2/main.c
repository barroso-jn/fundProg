#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 2
Elabore um programa que escreva no ecrã o seguinte:
Componentes da Avaliação Periódica
Provas Escritas 50%
Projeto 50%*/


void main(void)
{
    setlocale(LC_ALL,"Portuguese");
    printf("Componentes de Avaliação Periódica\n\nProvas Escritas 50%%\nProjeto \t50%%");

    getchar();
}
