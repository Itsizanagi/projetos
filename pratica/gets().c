#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){


    char string[] = "gustavo";

    int tamanho = strlen(string);
    printf("O tamanho da string e: %d\n", tamanho);



    int i;
    char palavras[10] = {"Gustavo"};
    //printf("Digite seu nome: ");
    //scanf("%20[^\n]", palavras);
    //gets(palavras);
    //fgets(palavras, sizeof(palavras), stdin); // FILE, buffer de entrada ( stdin (entrada padrao))

    for(i=0;i<10;i++){
        if (palavras[i] == '\0'){
            break;
        }
        printf("Posicao: %d\t Letra: %c\t Hex: 0x%X\t\n", i, palavras[i], palavras[i], palavras[i]);
    }
    printf("\n");


    return 0;
}