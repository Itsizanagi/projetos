#include <stdio.h>
#include <stdlib.h>

enum num {
    item1,
    item2,
    item3,
    item4,
    NUM_ITEMS
};

char matriz[][20] = {
    "O",
    "gosha",
    "eh",
    "gay"
};

char nomes_itens[NUM_ITEMS][20] = {
    "1",
    "2",
    "3",
    "4"
};

int main() {
    enum num let;

    for (let = item1; let < NUM_ITEMS; let++) {
        printf("%s = %s\n", nomes_itens[let], matriz[let]);
    }

    system("PAUSE");
    return 0;
}
