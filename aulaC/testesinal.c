#include <stdio.h>

int main(void) {
	signed char c;
	printf("O tamanho de c (char): %lu bytes / %lu bits \n", sizeof c, sizeof c *8);

	c = 255; // 255 = -1
	printf(" Valor de c: %i\n", c);

	return 0;

}