#include <stdio.h>

void func(char* str_to_print, int str_size) {
    for (int i = str_size; i >= 0; i--) {
        printf("%c", str_to_print[i]);
    }
    puts("");
}

int main(void) {
    char string[] = "vai da o cu";
    func(string, sizeof(string));

    return 0;
}
