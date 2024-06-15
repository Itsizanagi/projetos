#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int **matriz, i, j;

    matriz = malloc(4 * sizeof(int*));

    for(i = 0;i < 4;i++){
        matriz[i] = malloc(3 * sizeof(int));
    }
    srand(time(NULL));

    for(i = 0;i < 4;i++){
        for (j = 0; j < 3; j++){
            matriz[i][j] = rand() % 100;
        }
        
    }
    for(i=0;i<4;i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}