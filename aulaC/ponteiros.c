#include <stdio.h>
#include <stdbool.h>

int main(void){

/*  int a[] = {2000, 2001, 2002};

    for (int i =0;i<3;i++){
        printf("%d\n", *a + i);
    }
*/

///////////////////////////
/*   int i = 1913;
    int *p;

    p = &i;

    printf("o endereco de i em memoria: %p\n", &i);
    printf("o endereco de i em memoria: %p\n", p);
    printf("o conteudo de p: %d\n", *p);

    return 0;
////////////////////////////
*/

   /* int a[2];

    a[0] = 2017;
    a[1] = 2018;

    printf("a[0] = %d\na[1] = %d\n" , *a, *a+1);
*/
/////////////////////////////

    int imprime(char *s);

    char u[] = {0x67 ,0x75 ,0x73 ,0x74 ,0x61 ,0x76, 0x6f, '\0'};

    imprime(u);

    puts(u);
    return 0;
}

int imprime(char *s){
    while (*s != '\0'){
        putchar(*s++);
    }
}