#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {

    char hello[] = "Hello World";
    printf("Main %d\n", &hello);

    char *hello2 = malloc(sizeof(hello));
    strcpy(hello2, hello);
    printf("hello2: %x\n", hello2);

    char *hello3 = hello2 + 6;
    printf("hello2: %s\n", hello2);
    printf("Hello3: %s\n", hello3);

    return;
}
