#include <stdio.h>

int main(void)
{
	unsigned int a = 100, b;

	b = a >> 2;
	printf("%d\n", b);		/* 25 */

	return 0;
}
