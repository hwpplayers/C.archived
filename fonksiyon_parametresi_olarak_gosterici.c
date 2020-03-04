#include <stdio.h>

void foo(int *pi)
{
	*pi = 200;
}

int main(void)
{
	int a = 123;

	foo(&a);
	printf("%d\n", a);

	return 0;
}
