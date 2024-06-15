#include <stdio.h>

int main() {
    unsigned int i; // unsigned int implícito
/*
label: // rotulado
    printf("O valor de i: %u\n", i);
    i++;
    if ( i < 3)
        goto label;
*/
    for (i=0; i < 3 ; i++) {
    printf("O valor de i: %u\n", i);        
}



    return 0;
}
