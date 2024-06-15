#include <stdio.h>
#include <stdlib.h>

int main() {
    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("endereco de A: %p\tConteudo de A: %d\n", &A, A);
    printf("endereco de B: %p\tConteudo de B: %p\n", &B, B);
    printf("Conteudo apontado por B: %d\n", *B);
    printf("endereco de C: %p\tConteudo de C: %p\n", &C, C);
    printf("Conteudo apontado por C: %d\n", **C);

    return 0; 
}