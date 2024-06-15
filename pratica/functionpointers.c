#include <stdio.h>
#include <stdlib.h>

void imprimir(int *num){
    printf("%d\n", *num);
    *num = 80;
}

int main(){

    int age = 35;
    imprimir(&age);
    printf("main: %d\n", age);

    return 0;
}