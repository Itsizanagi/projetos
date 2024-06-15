#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error(char msg[]){
    (msg); // array de char
    exit(1); // 0 = sucesso; 1 = insucesso.
}


// void tchau(void){ // função sem parametro; nao retorna nada
//    printf("tchau!!!!!!!!\n");
//    exit(0); // função para sair do programa
//}

int soma(int a, int b) {
    int res;
    res = a + b;
    return --res; // decremento
}

int main(){

    int a, b;

    printf("Digite o A: ");
    scanf("%d", &a);
    if (a < 1){
        error("Erro: o num1 eh maior que 1\n");
    }
    else if (a < 1900){
        error("Vc eh mt veinho\n");
    }
    
    printf("Digite o b: ");
    scanf("%d", &b);

    printf("soma: %d\n", soma(a, b));
    printf("o endereco da funcao soma eh: %p\n", soma);

    return 0;
} 