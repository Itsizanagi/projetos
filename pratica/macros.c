#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUAD(x) (x*x) // o quadrado de x
#define MAX(x,y) (x > y ? x : y) // comp de qm eh o maior numero
#define MAX3(x, y, z) (MAX(MAX(x, y), z)) // comp de qm eh o maior numero com 3 valores
#define DEBUG 1
//#undef DEBUG

#define VAR(x) printf("variable "#x" has value: %d\n", x);

int main(){

    int let = 190;

    printf("%d\n", MAX3(1,2,4));
    printf("%d\n", __LINE__);

#ifdef DEBUG
    printf("I am here: line %d\n", __LINE__);
    VAR(let);
#endif
    return 0;
}