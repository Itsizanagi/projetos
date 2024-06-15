/* int main(int argc, char const *argv[])
{
    int *p1, local = 18;
    p1 = &local;
    printf("%d", p1);
    return 0;
}

int main() {
  char* fodase = 0;
  *fodase = 'b';
} */
/*
int main(int argc, char const *argv[])
{
    char* string = 0;
    *string = 'b';
    printf("%d", string);
    return 0;
}

*/

#include <stdio.h>

int main(void) {
  int s = 100;
  int* p;

  p = &s;

  printf("%p\n", &p);
  printf("%p\n", p);
  printf("%p", &s);

  return 0;
}