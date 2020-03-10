#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int(*foo(void))(int, int)
{
	return add;
}

int main(void)
{
	int(*pf)(int, int);
	int result;

	pf = foo();
	result = pf(10, 20);
	printf("%d\n", result);

	result = foo()(10, 20);
	printf("%d\n", result);
	
	return 0;
}
