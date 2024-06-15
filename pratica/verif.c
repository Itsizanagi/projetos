#include <stdio.h>
#include <stdlib.h>
#define RESPONSE fprintf(stderr,"esse numero e negativo");

// sim = 1
// nao = 0

#include <stdio.h>

int main() {
    int a;

    printf("\nDigite um valor: ");
    scanf("%d", &a);

    printf("\nVoce digitou: %d\n\n", a);

    if ( a < 0){
        RESPONSE;
    } else { 
        printf("Ok, numero aceito com sucesso. ");
    }

    return 0;
}