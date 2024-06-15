#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUCCESS printf("allocated memory\n");

void error() {
    fprintf(stderr, "Error");
    exit(1);
}

int main() {

    int i;
    int tam, *vetor;
    printf("Tam vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vetor = malloc(tam * sizeof(int));

    if (vetor) {
        SUCCESS;
        for (i = 0; i < tam; i++ ){
            *(vetor + i) = rand() % 100;
        }
        for (i = 0; i < tam; i++ ){
            printf("%d ", *(vetor + i));
        }
        printf("\nTam novo vetor: \n");
        scanf("%d", &tam);

        vetor = realloc(vetor, tam);
        printf("\n Vetor realocado: \n");
        for (i = 0; i < tam; i++ ){
            printf("%d ", *(vetor + i));
        }

    } else{
        error();
    }

    free(vetor);
    return 0;
} 