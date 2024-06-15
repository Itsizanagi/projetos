#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
    float f = 40.512334; // 3e2 // notação cientifica
    double d =  1;
    long double l = 1;

    printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8 );

    printf("O tamanho de d (double): %zu bytes / %zu bits\n", sizeof d, sizeof d * 8 );

    printf("O tamanho de ld (long double): %zu bytes / %zu bits\n", sizeof l, sizeof l * 8 );

    printf("O valor de f: %1.2f\n", f);

    return 0;
}