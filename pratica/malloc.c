#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SUCCESS printf("success in allocating\n");

void error() {
    fprintf(stderr, "allocation error\n");
}

int main() {

    int* x;

    x = malloc(sizeof(int));

    if (true){
        SUCCESS;
        *x = 50;
        printf("x: %d\n",*x );
    } else{
        error();
    }

    return 0;
}