#include <stdio.h>

int main(void) {
    int a = 8;
    int b = 1;
    int *p;
    int *p1;

    p = &a; 
    p1 = &b;

    if (a == b) {
        printf("%d\n", a && b);
        printf("O local de a: %d\n", p);
    } else {
        printf("São diferentes\n");
        printf("O local de b: %d", p1);
    }

    return 0;
}

    
