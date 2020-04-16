#include <stdio.h>

int main(void)
{
	int a = 10;
	int *pi = &a;

	++*pi;

	printf("%d\n", a);		/* 11 */

	return 0;
}
