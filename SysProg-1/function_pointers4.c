#include <stdio.h>

void foo(void)
{
	printf("foo\n");
}

void bar(void)
{
	printf("bar\n");
}

void tar(void)
{
	printf("tar\n");
}

void car(void)
{
	printf("car\n");
}

int main(void)
{
	void(*pfs[])(void) = { foo, bar, tar, car, NULL };
	int i;

	for (i = 0; pfs[i] != NULL; ++i)
		pfs[i]();

	return 0;
}
