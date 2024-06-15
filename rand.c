#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    int num2[10];

    srand(time(NULL)); // alterando a 'semente padrao da funcao', garantindo uma sequencia aleatorio de numeros

    for (i=0; i<10;i++){
        num2[i] = rand();
    }

    printf("\n\n");
    for(i=0;i<10;i++)
        printf("%d\n", num2[i]);
    printf("\n\n");


    return 0;   
}