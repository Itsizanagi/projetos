#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void error() {
    fprintf(stderr, "Erro de alocação");
    exit(1);
}

int main(){
    int *x;

    // x = malloc(sizeof(int));
    x = calloc(1,sizeof(int));

    if(x){
        printf("memory allocated successfully\n");
        
        printf("x: %d\n", *x);
        printf("tam: %d\n", sizeof x);
        *x = 50;
        printf("tam: %d\n", sizeof x);
        printf("x: %d\n", *x);

    }else{
        error();
    }

    return 0;
}