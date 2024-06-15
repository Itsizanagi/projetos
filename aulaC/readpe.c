#include <stdio.h>
#include <stdlib.h>

void error(char *msg){
    fprintf(stderr, "Erro: %s\n", msg);
    exit(1);
}

void usage(void){
    printf("Uso:\n\treadpe <arquivo.exe>\n");
    exit(1);
}

int main(int argc, char *argv[]){
    FILE *fh;
    unsigned char buffer[32];

    if (argc != 2){
        usage();
    }
    fh = fopen(argv[1], "rb");

    if (fh == NULL)
        error("erro de leitura");
    
    size_t bytes_lidos = fread(buffer, 1, 32, fh);
    
    if (bytes_lidos != 32)
        error("erro ao ler os dados do arquivo");
    
    for (size_t i = 0; i < bytes_lidos; i++) {
        printf("%02X ", buffer[i]); 
    printf("\n");

    fclose(fh);

    return 0;
}
