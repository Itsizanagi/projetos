#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Person {
    char nome[10];
    uint8_t age; // 8 bits sem sinal (0, 255 )
    float height;
};

void main() {

    struct Person person;
    strcpy(person.nome, "Gustavo");
    person.age = 43;
    person.height = 1.50;

    printf("Nome: %s\n", person.nome);
    printf("idade: %d\n", person.age);
    printf("Altura: %.2f\n", person.height);

    return 0;   
}
