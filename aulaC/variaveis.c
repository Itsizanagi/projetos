/* #include <stdio.h>

int main(void){
    char tipo1;
    short tipo2;
    int tipo3;
    long tipo4;
    long long tipo5;


    printf("o tamanho do tipo char eh: %lu bytes \n", sizeof tipo1);
    printf("o tamanho do tipo short eh: %lu bytes \n", sizeof tipo2);
    printf("o tamanho do tipo int eh %lu bytes \n", sizeof tipo3);
    printf("o tamanho do tipo long eh %lu bytes \n", sizeof tipo4);
    printf("o tamanho do tipo long long eh %lu bytes \n", sizeof tipo5);
    int array[10];
    printf("Tamanho do array: %zu bytes\n", sizeof(array));

    struct {
        int x;
        char y;
        double z;
    } myStruct;

    printf("Tamanho da estrutura: %zu bytes\n", sizeof(myStruct));
    return 0;
}
*/

// sizeof : operador

/*
#include <stdio.h>

int main (void) {
     unsigned char c; // com sinal e sem sinal 
    printf("o tamanho do tipo c (char): %lu bytes e %lu bits \n", sizeof c, sizeof c * 8); // parenteses faz parte do argumento do operador

    c = 256; // overflow in implicit constant conversion ( maior numero para se representar com 8 bits 255)
    printf("Valor de c: %i\n", c);

    return 0;
} 
*/


/*
#include <stdio.h>

int main (void) {
    char c; // com sinal e sem sinal 
    printf("o tamanho do tipo c (char): %lu bytes e %lu bits \n", sizeof c, sizeof c * 8); // parenteses faz parte do argumento do operador

    c = 10; // overflow in implicit constant conversion ( maior numero para se representar com 8 bits 255)
    c = 0xa;
    c = '\n';
    printf("Valor de c: %i\n", c);

    return 0;
} 
*/


#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool b;
    char c;

    c = 0; // falso
    c = 1; // verdadeiro

    b = true;
    b = false;

    printf("O tamanho de b (bool): %lu bytes \n", sizeof b);

    b = false;
    printf("O valor de b e: %i\n", b);
    return 0;

}

// representacao de numeros negativos
// 127 maior numero possivel variavel char com sinal 
// maior que 127 numeros negativos
// 255 = -1