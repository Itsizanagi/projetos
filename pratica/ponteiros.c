/*
#include <stdio.h>

int main(void) {
    int s = -999;
    int *p = &s;

    printf("%p\n", (void*)p);
    printf("%p\n", &s);
    printf("%p\n", p);



    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int x;
    int i = 100;

    int* p;
    p = &i;

    x = *p+900;

    printf("%d\n", i);
    printf("%p\n", &i);
    printf("%p\n", p);
    printf("%d\n", x);



    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int i;
    i  = 100;

    printf("%d\n", *&i); // 100 

    return 0;
}
*/


#include <stdio.h>

void troca(int i, int j){
    int temp; // Porque temp é um ponteiro para o qual não foi atribuído um endereço “que conhecemos”: ele contém um endereço de memória que não pertence a nenhuma das variáveis que criamos. 
    temp = i; 
    i = j; 
    j = temp; 
}

int main() {
    int a = 1;
    int b = 10;

    troca(a,b);

    printf("%d\n" "%d", a, b);
}
