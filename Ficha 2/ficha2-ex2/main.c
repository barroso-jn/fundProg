#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 2
Elabore um programa que escreva no ecr� o seguinte:
Componentes da Avalia��o Peri�dica
Provas Escritas 50%
Projeto 50%*/


void main(void)
{
    setlocale(LC_ALL,"Portuguese");
    printf("Componentes de Avalia��o Peri�dica\n\nProvas Escritas 50%%\nProjeto \t50%%");

    getchar();
}
