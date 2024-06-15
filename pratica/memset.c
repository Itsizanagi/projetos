#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char buffer[10];

    memset(buffer, 'a', sizeof(char) * 10);

    for (i = 0;i < 10; i++)
        printf("%c", buffer[i]);
    printf("\n");
    return 0;
}