#include <stdio.h>
#include <stdlib.h>
funcao1();
funcao2();

int main()
{
    printf("Inicio da funcao principal - main\n");
    funcao1();
    printf("Estou entre as funcoes 1 e 2\n");
    funcao2();
    printf("Fim da funcao main\n");
}

funcao1()
{
    printf("Estou na funcao 1\n");
}


funcao2()
{
    printf("Estou na funcao 2\n");
}
