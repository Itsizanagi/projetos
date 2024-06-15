#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strchr -> retorna a primeira ocorrencia
// strrchr -> retorna a ultima ocorrencia

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50] = "goodbye world";
    char* letra;
    letra = strrchr(palavra, 'o');

    if (letra != NULL) {
        printf("\n1- %c\n", *letra);
        printf("\n2- %c\n", *(letra + 1));
        printf("\n3- %c\n", *(letra + 2));
        printf("\n4- %c\n", *(letra + 3));
        printf("\n5- %c\n", *(letra + 4));
    } else {
        printf("erro\n");
    }

    return 0;
}
