#include <stdio.h>

int main(void)
{
	unsigned a = 0, b;

	b = ~a;
	printf("%u\n", b);		/* 4294967295 */

	return 0;
}
