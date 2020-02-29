#include <stdio.h>

int main(void)
{
	int i = 10;

	while (--i)
		printf("%d ", i);	/* 9'dan 1'e kadar */
	putchar('\n');

	return 0;
}
