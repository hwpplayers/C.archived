#include <stdio.h>

int main(void)
{
	int i = 0;

	while (++i < 10)
		printf("%d ", i);	/* 1'den 9'a kadar */
	putchar('\n');

	return 0;
}
