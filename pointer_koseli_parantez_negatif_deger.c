#include <stdio.h>

int main(void)
{
	int a[3] = { 10, 20, 30 };
	int *pi;

	pi = a + 2;
	printf("%d\n", pi[-2]);		/* 10 */

	return 0;
}
