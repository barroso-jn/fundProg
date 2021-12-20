#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char menuPrincipal();
menuOpcaoA();
menuOpcaoB();
menuOpcaoC();
confirmaSaida();


void main(opcao)
{

menuPrincipal();
getchar();



}

char menuPrincipal() {

    char opcao;

    printf("\n************************ Menu Principal ************************\n");
    printf("A - Opcao A\n");
    printf("B - Opcao B\n");
    printf("C - Opcao C\n");
    printf("F - Fim\n\n");

    printf("Escolha uma opcao:\n");
    fflush(stdin);
    scanf("%c", &opcao);

    system("cls");

    if(opcao == 'a'|| opcao =='b' || opcao =='c' || opcao=='f'){
        printf("Opcao --> %c\n",opcao);
        switch (opcao)
        {
            case 'a':
                menuOpcaoA();
                break;

            case 'b':
            case 'B': menuOpcaoB();
                break;


            case 'c':
            case 'D': menuOpcaoC();
                break;


            case 'f':
            case 'F': confirmaSaida();
                break;
    }
    }
    else {
        printf("Escolha uma opcao valida\n");
        menuPrincipal();


    }

return opcao;


}

menuOpcaoA() {

    int opcao2;

    printf("************************ Menu Opcao A ************************\n");
    printf("1 - Opcao A.1\n");
    printf("2 - Opcao A.2\n");
    printf("3 - Opcao A.3\n");
    printf("0 - Voltar ao menu anterior\n\n");

    printf("Escolha uma opcao:\n");
    fflush(stdin);
    scanf("%d", &opcao2);
    printf("Opcao --> %d\n",opcao2);
    system("cls");

    if(opcao2==0){
        menuPrincipal();
    }

}
menuOpcaoB() {

    int opcao2;

    printf("************************ Menu Opcao B ************************\n");
    printf("1 - Opcao B.1\n");
    printf("2 - Opcao B.2\n");
    printf("3 - Opcao B.3\n");
    printf("0 - Voltar ao menu anterior\n\n");

    printf("Escolha uma opcao:\n");
    fflush(stdin);
    scanf("%d", &opcao2);
    printf("Opcao --> %d\n",opcao2);
    system("cls");

    if(opcao2==0){
        menuPrincipal();
    }

}
menuOpcaoC() {

    int opcao2;

    printf("************************ Menu Opcao C ************************\n");
    printf("1 - Opcao C.1\n");
    printf("2 - Opcao C.2\n");
    printf("3 - Opcao C.3\n");
    printf("0 - Voltar ao menu anterior\n\n");

    printf("Escolha uma opcao:\n");
    fflush(stdin);
    scanf("%d", &opcao2);
    printf("Opcao --> %d\n",opcao2);
    system("cls");

    if(opcao2==0){
        menuPrincipal();
    }

}

confirmaSaida(){
    char conf;
    printf("Comfirma a sua saida:[Y/N]");
    fflush(stdin);
    scanf("%c", &conf);
    if (conf=='n'){
        menuPrincipal();
    }
}
