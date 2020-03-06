#include <stdio.h>

void foo(void)
{
	static int count = 1;

	printf("%d\n", count);

	++count;
}

int main(void)
{
	foo();
	foo();
	foo();

	return 0;
}
