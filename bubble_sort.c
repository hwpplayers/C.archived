#include <stdio.h>

#define SIZE		10

int main(void)
{
	int a[SIZE] = { 10, 23, -5, 34, 77, 100, 32, 87, 22, 44};
	int i, k;
	int temp;

	for (i = 0; i < SIZE - 1; ++i)
		for (k = 0; k < SIZE - 1 - i; ++k) {
			if (a[k] > a[k + 1]) {
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}

	for (i = 0; i < SIZE; ++i)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
