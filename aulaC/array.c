#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

// array: armazena valores em sequecia, a ponta para endereços fixos de memoria
// tamanho do array é o tamanho total em bytes.

// array aponta diretamente pr primeiro endereço do seu elemento 
int main(void) {
    unsigned char c[3]; // char[3] ocupa 3 bytes na memoria

    printf("O tamanho de c: %zu\n", sizeof c);
    printf("O numeros de elementos de c: %zu\n", sizeof c / sizeof c[0] ); // tamanho de um único elemento do array em bytes

    c[0] = 0xa; // 10 or 'A' = A
    c[1] = 0xb; // 11 or '0x42' = B 
    c[2] = 0xc; // 12 or '67' = C

    printf("O  elemento 0 de c: %d\n", c[0]); // pegar valores
    printf("O  elemento 1 de c: %d\n", c[1]);
    printf("O  elemento 2 de c: %d\n", c[2]);
    printf("O  elemento 3 de c: %d\n", c[3]); // valor desconhecido, lixo de memoria


    printf("O endereco do array c em memoria 1: %p\n", c);
    printf("O endereco do array c em memoria 2: %p\n", &c);
    printf("O endereco do array c em memoria 3: %p\n", &c[1]);

    unsigned char *address = (unsigned char *)0x0061FF1A;

    printf("%d", *address);


    return 0;
}