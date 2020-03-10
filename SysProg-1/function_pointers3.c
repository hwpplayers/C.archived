#include <stdio.h>

void foo(void (*pf)(void))
{
	pf();
}

void bar(void)
{
	printf("bar\n");
}

void tar(void)
{
	printf("tar\n");
}

int main(void)
{
	foo(bar);
	foo(tar);

	return 0;
}
