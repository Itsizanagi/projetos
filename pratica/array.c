#include <stdio.h>

int main() {
  char um[4] = {'a', 'b', 'c', 0};
  printf("um[0] : %p\n", (void*)&um[0]);

  char dois[4] = {'d', 'e', 'f', 0};
  printf("'dois' [%s] : %p\n", dois, (void*)&dois); // so pra evitar q o compilador otimize

  printf("um + 5 : %d : %p\n", um+5, (void*)&um+5 /*overflow*/);
  
}