#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]){ // envp: declaração das variaveis de ambiente

/*
    if (argc == 1){ // arquivo de execusao
        printf("tudo certo aqui\n");
    }
    printf("numero de argumentos: %d\n", argc);
    printf(argv[0]);
*/

/*
    int i = 0;

    for(i=0;i<argc;i++){
        puts(argv[0]);
    } 
    puts(envp[1]);
*/

    int let; // 4 bytes alocados para um int32

    printf("o endereco de i: %p\ntamanho de i: %zu\n", &let, sizeof(let));

    int *p = NULL; // tem endereço mesmo ele apontando pra nulo; conteudo nulo
    printf("o endereco de p: %p\ntamanho de p: %zu\n", &p, sizeof(p));


    printf("p antes da atribuicao de let: %p\n", p);

    p = &let;

    printf("conteudo de p dps da atribuicao: %p\n", p);

    let = 10;

    printf("*p = %d\n", *p);

    int *sync = NULL;

    sync = malloc(sizeof(int));

    *sync = 9;
    printf("valor de 'sync': %d\n", *sync);

    return 0;
}

