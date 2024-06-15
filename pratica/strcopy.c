#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char receber[20];
    char palavra1[50] = {"desprazer"};
    char palavra2[50] = {"amarelo"};

    printf("\npalavra 1: %s\npalavra 2: %s\n", palavra1, receber);

    strcpy(receber, palavra1); // Copia a string palavra1 para a ''string receber

    printf("\npalavra 1: %s\npalavra 2: %s\n", palavra1, receber);

    return 0;
}