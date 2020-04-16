#include <stdio.h>

#define square(a)	a * a

int main(void)
{
	int result;

	result = square(10);
	printf("%d\n", result);

	return 0;
}
