#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * = atribuicao
 * + - unarios
 * + - binarios (adicao e subtracao)
 * * / (multiplicacao e divisao)
 * % (resto da divisao)
 * ++ (incremento)
 * -- (decremento)
*/

int main(void) {
    int a;

    a = 4 + 2 * 3;
    printf("%d\n", a--); // pos incremento e pre incremento
                        // o incremento ocorreu apos a chamada da printf, portanto
    printf("%d", a);    // usa-se pre incremento nesse caso.


    return 0;
}