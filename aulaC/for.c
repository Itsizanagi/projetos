/*
#include <stdio.h>

int main() {
    unsigned int i; // unsigned int implícito

//label: // rotulado
//    printf("O valor de i: %u\n", i);
//    i++;
//    if ( i < 3)
//        goto label;

    for (i=0; i < 3 ; i++) {
    printf("O valor de i: %u\n", i);        
}



    return 0;
} */

#include <stdio.h> 
#include <stdbool.h>

int main(void) {
    unsigned int i = 0;

//    while (true){
//        printf("O valor de i: %u\n", i++);
//    }

//    do // sempre vai rodar pelo menos uma vez independente do valor de i 
//       printf("O valor de i: %u\n", i++);
//   while (i < 3);

    while (true) {
        printf("O valor de i: %u\n", i);
        if (i >= 2)
            break;
        i++;
    }
    
    return 0;
}