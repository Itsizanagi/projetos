#include <stdio.h>
#include <stdlib.h>


enum num{
    item1,
    item2,
    item3,
    item4
};
char matriz[][20] = {
    "Arquivo.txt",
    "Arquivo.bat",
    "Arquivo.cpp",
    "Arquivo.json"
};

int main() {

    enum num let;

    for(let = item1;let <= item4; let++){
        printf("%s\n", matriz[let]);
    }

    system("PAUSE");
    return 0;
}