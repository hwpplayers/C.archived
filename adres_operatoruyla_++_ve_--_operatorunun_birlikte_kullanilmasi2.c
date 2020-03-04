#include <stdio.h>

int main(void)
{
	int a[2] = { 10, 20 };
	int *pi = a;

	*++pi = 30;

	printf("%d\n", a[1]);		/* 30 */

	return 0;
}
