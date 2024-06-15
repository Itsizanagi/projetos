#include <stdio.h>
#include <stdlib.h>
#define TAM 5

enum pedras {CAVALO, BISPO, TORRE, RAINHA};

int main(int argc, char const *argv[]) {
    /*
    char s[10] = {"gustavo"}; // 30 - 0-29

    printf("%c\n", s[6]); // posicão correspondente 
    printf("%x\n", *(s+7)); // quantas posições para frente

    printf("%x\n", 7[s]); 
    printf("%x\n", *(7+s));

    // for (int i=0; i<30; i++)
    //    printf("%x ", s[i]);
*/

    int matriz[TAM][TAM] = {0};
    int i, j;

    matriz[0][0] = CAVALO; 
    matriz[0][1] = BISPO;
    matriz[1][0] = TORRE;
    *(*(matriz+1) + 1) = RAINHA;


    for (i=0 ; i<TAM; i++){
        for (j=0; j<TAM; j++){
            printf("[%d][%d]=%d ", i, j, matriz[i][j]);
            if (j == TAM-1){
                putchar('\n');
            }
        }
        
    }

    return 0;
}
