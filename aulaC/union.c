#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vai pegar o maior valor do tipo e admiti-lo

union st{
    unsigned char id;
    unsigned int num;
};

int main(void){
    union st s;

    // id = 225
    // coloquei 223 e os bytes sao compartilhados (/ espaço de memoria) entao desceu para 2015

    s.num = 2017;
    s.id = 223;
 

    printf("s.num: %d\n", s.num);

    return 0;
}
