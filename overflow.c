#include <stdio.h>

void f1(char hello[]) {
    printf("%x\n", &hello);
    f1(hello);
}

void main(){

    char hello[] = "Hello World";
    printf("Main: %x\n", &hello);
    f1(hello);

    return;
}
/*
função chama ela mesmo, sem parar
cada chamada duplica a string de hello world na stack

A stack começa nos endereços mais altos depois do espaço da kernel na memoria
A medida que vamos empilhando novas chamadas f1(hello) duplicando a variavel 
hello como argumento os endereços vao diminuindo
*/