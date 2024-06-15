#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR do { \
    fprintf(stderr, "ERROR PROCESS"); \
    printf(" (linha %d)\n", __LINE__); \
    exit(1); \
} while(0)

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;


Pessoa solicitar_info() {
    Pessoa nova_pessoa;

    printf("Informe o nome: ");
    fgets(nova_pessoa.nome, 50, stdin);
    nova_pessoa.nome[strcspn(nova_pessoa.nome, "\n")] = '\0'; 

    printf("Informe a idade: ");
    scanf("%d", &nova_pessoa.idade);
    if (nova_pessoa.idade < 0) {
        ERROR;
    }

    printf("Informe a altura: ");
    scanf("%f", &nova_pessoa.altura);
    if (nova_pessoa.altura < 0) {
        ERROR;
    }

    return nova_pessoa;
}


void imprimir_info(Pessoa pessoa) {
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);
}


void formulario() {
    Pessoa nova_pessoa = solicitar_info();

    printf("\nInformacoes da pessoa:\n");
    imprimir_info(nova_pessoa);
}

int main(){
    formulario();

    return 0;
}
