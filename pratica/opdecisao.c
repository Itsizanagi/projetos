#include <stdio.h>
#include <stdlib.h>

    // ( a > b ) => 1
    // ( b > a) => 0
    // ( a < b ) / ( b < a) => 1
    // ( a <= b) => 1
    // ( a >= b)

int main() {

    int a = 20, b = 20;

    printf("\n\tResultado: %d\n\n", a >= b); 

    return 0;
}