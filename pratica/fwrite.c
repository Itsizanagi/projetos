#include <stdio.h>
#include <stdlib.h>

#define ERROR do { printf("error\n"); exit(1); } while(0)

typedef struct {
    char nome[50];
    int dia, mes, ano;
} Contato;

void escrever(char arq[]) {
    Contato c;
    FILE *file = fopen(arq, "ab");

    if(file) {
        printf("Digite o nome e a data de nasci dd mm aaaa: ");
        scanf("%49[^\n] %d %d %d", c.nome, &c.dia, &c.mes, &c.ano);
        fwrite(&c, sizeof(Contato), 1, file);
        fclose(file);
    } else {
        ERROR;
    }
}

int main() {
    char arquivo[] = "agenda.txt";
    escrever(arquivo);

    system("PAUSE");
    return 0;
}
