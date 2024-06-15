#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {

    char tipo[20];
    char referencia[4];
    unsigned char num_ref;
    int valor;
    char unidade[10];


} componente;


int main(void){
    componente comp;
    printf("Tipo do componente: ");
    fflush(stdin);
    fgets(comp.tipo, 20,stdin);

    printf("referencia do componente: ");
    fflush(stdin);
    fgets(comp.referencia,4,stdin);

    printf("numero da referencia: ");
    scanf("%c", &comp.num_ref);
    getchar();

    printf("Valor do componente: ");
    scanf("%d", &comp.valor);

    printf("Unidade: ");
    fflush(stdin);
    fgets(comp.unidade, 10, stdin);

    printf("\n\nCRIADO COM SUCESSO.");
    printf("%s\n", comp.tipo);
    printf("%s\n", comp.referencia);
    printf("%c\n", comp.num_ref);
    printf("%d\n", comp.valor);
    printf("%s\n", comp.unidade);

    return 0;
}