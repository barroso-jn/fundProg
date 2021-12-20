#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int pe1;
    int pe2;
    float p;
    int p1;
    int p2;
    float tp;

    printf("Componente TEORICO-PRATICA ");
    printf("\nClassificacoes nas Provas Escritas [0;100]");

    printf("\nIntroduza a nota na Prova Escrita 1 (50%%): ");
    fflush(stdin);
    scanf("%d",&pe1);

    printf("Introduza a nota na Prova Escrita 2 (50%%): ");
    fflush(stdin);
    scanf("%d",&pe2);

    printf("\n\nComponente PRATICA ");
    printf("\nClassificacoes nas Provas Escritas [0;100]");

    printf("\nIntroduza a nota na Entrega 1 (65%%): ");
    fflush(stdin);
    scanf("%d",&p1);

    printf("Introduza a nota na Entrcega 2 (35%%): ");
    fflush(stdin);
    scanf("%d",&p2);

    printf("\n\nEPOCA DE AVALIACAO PERIODICA");
    printf("\nComponente Teorico-Pratica (50%%):\t %.2f", tp=(((pe1+pe2)/2)/5));

    printf("\nComponente Pratica (50%%): \t\t%.2f",p=((((p1*0.65)+(p2*0.35))/5)));

    printf("\nClassificacao Final [0;20]: \t\t%.2f", (tp+p)/2);

    getchar();

}


