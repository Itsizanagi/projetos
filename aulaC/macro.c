#include <stdio.h>
#define calculo(x) (x*x) 

// x maior q y ? se sim me retorna o mesmo
#define MAX(x,y) (x > y ? x : y) 

// maior numero entre as variaveis
#define MAX3(x,y,z) \
(MAX(MAX(x,y), MAX(y,z))) 

#define DEBUG 

#define VAR(x) printf("A variavel "#x" tem valor: %d\n", x)

// int calc(int x) { return x*x;}

int main() {

    int contador = 90;

    printf("%d\n", MAX(3, 9));
    printf("%d\n", calculo(8)); // 64
    printf("%d\n", MAX3(3, 41, 8));
#ifdef DEBUG   // macro definida 
    printf("%d\n", __LINE__); // linha 
    printf("%s\n", __DATE__); // data atual
    printf("%s: Estou na linha %d\n", __TIME__, __LINE__); // hora
    VAR(contador);
#endif

    // int *address = ( int *)0x405064; // pegando a partir do endereço
    // printf("%d", *address);


    return 0;
}

/*
#define SIZE 100 // tempo de compilação

int main(void) {
    char buff[SIZE] = {'\0'}; // inicializar com 0 // +1 para o caractere nulo terminador

    printf("Digite algo: ");
    scanf("%s", &buff); // Limita a leitura a 10 caracteres

    printf("Voce digitou:\n%s\n", buff);

    return 0;
}*/