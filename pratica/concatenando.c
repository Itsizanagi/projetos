#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavras[20] = "Oi,";
    //char palavras2[10] ="Ola.";
    strcat(palavras, " bom dia.");
    //strcat(palavras, palavras2); // a primeira vai receber a concatenação e a outra vai concatenar.
    printf("\n\n%s\n", palavras);
    return 0;
}