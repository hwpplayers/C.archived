#include <stdio.h>

void for_each(int *pi, int size, void (*pf)(int *))
{
	int i;

	for (i = 0; i < size; ++i)
		pf(&pi[i]);
}

void square(int *pi)
{
	*pi = *pi * *pi;
}

void disp(int *pi)
{
	printf("%d\n", *pi);
}

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for_each(a, 10, square);
	for_each(a, 10, disp);

	return 0;
}
