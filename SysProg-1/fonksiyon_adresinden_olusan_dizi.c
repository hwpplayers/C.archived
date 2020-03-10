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

int main(void)
{
	void(*a[]) (void) = { foo, bar, tar, NULL };
	int i;

	for (i = 0; a[i] != NULL; ++i)
		a[i]();

	return 0;
}
