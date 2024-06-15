#include <stdio.h>

int main(void) { 
    int a = 359;

if (a == -1 || a == 440) {
    int chave = 3;
    printf("chave: %d\n", chave);
}
else if (a < 500){
    puts("menor que 500\n");
    if (1) {
        printf("ok\n");
    }
}

else if (a == 359) {
    printf("oi");
}

else {
    printf("Ambos sao falsos\n");
    puts("oi");
}
       
    printf("O valor: %d\n", a);

    return 0;
}

// ternario

/*

( a == 3) ? puts("3") : puts("sei o valor")

*/