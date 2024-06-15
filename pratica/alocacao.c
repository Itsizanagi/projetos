#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void *malloc_s(size_t size) {
    void *ptr;
    ptr = malloc(size);
    if ( ptr == NULL){
        fprintf(stderr, "Erro de memoria");
        exit(1);
    }
    else if (ptr != NULL){
        printf("deu certo\n");
    }
    return ptr;
}

int main(int argc, char const *argv[]){
    int *p, i;

    p = malloc_s( 5 * sizeof (int));
    memset(p, 0, 5 * sizeof (int)); // inicializar uma area de memoria alocada com 0 // preenchendo os 20 bytes com 0

    *(p+0) = 9;
    *(p+1) = 8;
    *(p+2) = 7;
    *(p+3) = 6;
    *(p+4) = 5;
    *(p+5) = 90; // atribuindo endereços para um região nao ''dominada'' ( nao foi alocado)
    for (i = 0; i<6; i++)
        printf("%d\n", *(p+i));

    // p = realloc(p, 6 * sizeof (int)); // muda o tamanho da memoria ja alocada

    free(p);
    return 0;
}




