#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int day, month, year;

}Date;

void printdate(Date *x){
    printf("%d/%d/%d\n", x -> day, x -> month, x -> year);

}

int main() {
    Date date;
    Date *pointer;

    pointer = &date;

    printf("date: %p\tp: %p\n", &date, pointer);

    date.day = 29;
    date.month = 12;
    date.year = 2017;

    printdate(pointer);

    return 0;
}

// manipulaçaõ de ponteiros para uma struct ''->''