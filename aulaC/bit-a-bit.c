

/* &
 * |
 * ^ xor
 * ~
 * <<
 * >>
*/ 


// 0 falso
// qualquer coisa diferente de 0 e verdadeiro

// primeiro bit usado pr sinal

/*
#include <stdio.h>

int main(void) {
    int a = 0b10000000000000000000000000000000;
    int b = 0b01111111111111111111111111111111; // primeiro bit ta zerado

    printf("O resultado: %d\n", ~a); // 1 e 1, basicamente
    /*
    for (int i = 1; i <= 32; i++) {
       printf("%d", 1); 
    }
    */   
//    return 0;
//}

#include <stdio.h>

int main(void) {
    int a = 8; // 1000 => 
    int b = 3; // 0110

    int c = 0b00000000000000000000000000000000;
    int d = 0b11111111111111111111111111111111; 

    printf("O resultado do operador AND: %d\n", a & b); // 0001
    printf("O resultado do operador OR: %d\n", a | b ); // 0111
    printf("O resultado do operador XOR: %d\n", a ^ b ); // 0110
    printf("O resultado do operador NOT: %d\n", ~d);
    printf("O resultado do operador : %d\n", a << 2);
    return 0;
}
