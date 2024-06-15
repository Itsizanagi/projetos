#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void error(){
    fprintf(stderr,"invalid number");
    exit(1);
}

int main() {
    int op;

    printf("//////////\n");
    printf("1 - Register product\n2 - sell product\n3 - search product\n4 - print out\n5 - break. ");
    printf("\n//////////\n");
    printf("select an option: ");
    scanf("%d", &op);
    if (op < 0)
        error();
    switch(op){
        case 1:
            printf("\n Signing up...\n");
            break;;
        case 2:
            printf("\n selling a new product...\n");
            break;
        case 3:
            printf("\nlooking for new product\n ");
            break;
        case 4:
            printf("\n printing report...\n");
            break;
        case 5:
            printf("\n leaving...\n");
            break;
        default:
            printf("\noption not validated");
            break;

    }
    
    


    return 0;
}