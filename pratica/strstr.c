#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[50] = {"Bom dia pessoal"};
    char str[] = {"noite"};
    char* ponteiro;

    ponteiro = strstr(palavra, str);

    if (ponteiro != NULL)
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
    else
        printf("\nNULL\n");
    return 0;
}
