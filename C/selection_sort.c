#include <stdio.h>

#define SIZE		10

int main(void)
{
	int a[SIZE] = { 10, 23, -5, 34, 77, 100, 32, 87, 22, 44};
	int i, k;
	int min, minIndex;

	for (i = 0; i < SIZE - 1; ++i) {
		min = a[i];
		minIndex = i;
		for (k = i + 1; k < SIZE; ++k)
			if (a[k] < min) {
				min = a[k];
				minIndex = k;
			}
			a[minIndex] = a[i];
			a[i] = min;
	}

	for (i = 0; i < SIZE; ++i)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
