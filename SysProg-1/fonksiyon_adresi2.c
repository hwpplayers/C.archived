#include <stdio.h>

double foo(double a)
{
	printf("foo: %d\n", a);

	return 0;
}

double (*bar(long a))(double)
{
	return foo;
}

double(*(*tar(int a))(long))(double)
{
	return bar;
}

int main(void)
{
	double(*(*pf1)(long))(double);
	double(*pf2)(double);

	pf1 = tar(0);
	pf2 = pf1(0);
	pf2(0);

	return 0;
}
