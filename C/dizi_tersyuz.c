#include <stdio.h>

#define SIZE		10

int main(void)
{
	int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i, temp;

	for (i = 0; i < SIZE / 2; ++i) {
		temp = a[SIZE - i - 1];
		a[SIZE - i - 1] = a[i];
		a[i] = temp;
	}

	for (i = 0; i < SIZE; ++i)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
