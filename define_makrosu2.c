#include <stdio.h>

#define square(a)	a * a

int main(void)
{
	int result;
	int x = 10;

	result = square(x);		/* result = x * x */
	printf("%d\n", result);

	return 0;
}
