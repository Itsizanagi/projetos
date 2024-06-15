#include <stdio.h>

typedef struct person{
    unsigned char id;
    unsigned int num;

}perso;


int main(void) {

    perso perso;

    perso.id = 12;
    perso.num = 2001;

    printf("id: %d\nnum: %d\n", perso.id, perso.num);

    printf("sizeof (struct person): %d\n", sizeof(perso));

    return 0;
}