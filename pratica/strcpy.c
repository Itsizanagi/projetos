#include <stdio.h>
#include <stdlib.h>

int strcpy(char *x, char *y){
    int i = 0;

    while(*(x + i) != '\0'){
        *(y + i) = *(x + i);
        i++;
    }
    *(y + i) = '\0';
    return i;
}

int main(){
    char destiny[25], origin[25] = {"bom dia"};

    printf("tam: %d\n", strcpy(destiny, origin));
    printf("Destino: %s\n", origin);


    return 0; 
}