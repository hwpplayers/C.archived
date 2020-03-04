#include <stdio.h>
#include <string.h>

int main(void)
{
	double a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double b[10];
	int i;

	memcpy(b, a, 10 * sizeof(double));

	for (i = 0; i < 10; ++i)
		printf("%f ", b[i]);
	printf("\n");

	return 0;
}
