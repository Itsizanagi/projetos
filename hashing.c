#include <stdio.h>
#include <stdlib.h>

int main() {
    // Tentativa de alocar memória para um int usando o tamanho de um char
    int *p = (int *)malloc(sizeof(char));

    if (p == NULL) {
        fprintf(stderr, "Falha na alocação de memória\n");
        return 1;
    }

    // Atribuindo um valor a essa memória
    *p = 123;

    // Imprimindo o valor
    printf("Valor: %d\n", *p);
    printf("Valor: %d\n", sizeof *p);


    // Liberando a memória alocada
    free(p);

    return 0;
}

// comportamento indesejado ( alocar o tamanho de um char para um int )