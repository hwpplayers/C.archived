#include <stdio.h>

int square(int a)
{
	return a * a;
}

int main(void)
{
	int (*pf)(int);
	int result;

	pf = square;
	result = pf(10);
	printf("%d\n", result);

	return 0;
}
