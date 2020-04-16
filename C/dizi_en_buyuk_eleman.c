#include <stdio.h>

#define SIZE		10

int main(void)
{
	int a[SIZE] = { 10, 4, 6, 34, 32, -34, 39, 21, 9, 22 };
	int i, max;

	max = a[0];

	for (i = 1; i < SIZE; ++i)
		if (a[i] > max)
			max = a[i];

	printf("Max = %d\n", max);

	return 0;
}
