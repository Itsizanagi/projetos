#include <stdio.h>
#include <stdlib.h>

void funcao(void){
    register int i = 0;
    for (;i<3;i++)
        printf("%d\n", i);

}

int main(void){
    funcao();

    return 0;
}