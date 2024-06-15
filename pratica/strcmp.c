#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// comparando strings com strcmp()
// -1 -> a string1 ocorre primeiro que a string2
// 0 -> as strings são iguais
// 1 ->  a string2 ocorre primeiro que a string1


int main() {

    char palavra1[50] = {"desprazer"};
    char palavra2[50] = {"amarelo"};

    printf("\n\nResultado: %d\n\n", strcmp(palavra1, palavra2));

    return 0;
}