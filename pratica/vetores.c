#include <stdio.h>

int main()
{

    int array[7] = {0, 1, 2, 3, 4, 5, 6};

    printf("%p : %d\n", array, *array);
    printf("%p : %d\n", array+1, *(array+1));
    printf("%p : %d\n", array+2, *(array+2));
    printf("%p : %d\n", array+3, *(array+3));
    printf("%p : %d\n", array+4, *(array+4));

}