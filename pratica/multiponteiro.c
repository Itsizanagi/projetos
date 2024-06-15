#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, *B, **C, ***D;

    printf("enter a value: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("double %d is: %d\n", A, 2 * *B);
    printf("triple %d is: %d\n", A, 3 * **C);
    printf("quadruple %d is: %d\n", A, 4 * ***D);

    #ifdef __linux__
        printf("ending...");
        system("pause");
        system("cls");
    #endif
        exit(1);
    return 0;
}