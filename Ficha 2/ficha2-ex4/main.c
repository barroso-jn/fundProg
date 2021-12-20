#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char ch;

    printf("Introduza um caracter: ");
    scanf("%c",&ch);

    printf("The ASCII value of the %c character is: %d",ch,ch);

    getchar();

}
