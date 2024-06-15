#include <stdio.h>


void op(char* texto) {
    while (*texto != '\0') {
        printf("%02x ", *texto);
        texto++;
    }
    printf("\n");
}

int main() {
    char *nome1 = "gustavo";
    op(nome1);

    unsigned int nome[] = {0x67, 0x75, 0x73, 0x74, 0x61, 0x76, 0x6f};
    for (int i = 0; i < sizeof(nome) / sizeof(nome[0]); i++) {
        printf("%c ", (char)nome[i]);
    }
    return 0;
}


