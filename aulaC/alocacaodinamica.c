#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size) { \
    ptr = malloc(size); \
    if (ptr == NULL) { \
        fprintf(stderr, "erro de memoria\n"); \
        exit(1); \
    } \
}

/*
void *malloc_s(size_t size) { //parametros
    void *ptr;
    ptr = malloc(size);
    if (ptr == NULL){
        fprintf(stderr, "memoria insuficiente");
        exit(1);
    }
    else if (ptr != NULL){
        printf("Deu certo\n");
        return ptr;
    }
}
*/

int main(int argc, char const *argv[]){
    int *p, i;
    // p = malloc_s(sizeof (int));
    MALLOC(p, 5 * sizeof(int)); // 5 numeros inteiros (array de int )// 4 bytes foram alocado endereço foi para p

    memset(p, 0, 5 * sizeof(int)); // inicializando com zeros

    *(p+0) = 9;
    *(p+1) = 43; //
    *(p+2) = 65; //
    *(p+3) = 11; //
    *(p+4) = 23; //

    for (i=0;i<5;i++){ //
        printf("%d\n", *(p+i));
    }

    p = realloc(p, sizeof(int) * 6); // realocar memoria ( 5 para 6)
    *(p+5) = 20;


    free(p);
    return 0;
}
