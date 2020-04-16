#include <stdio.h>

int getmax(int *pi, int size)
{
	int max = pi[0];
	int i;

	for (i = 1; i < size; ++i)
		if (pi[i] > max)
			max = pi[i];

	return max;
}

int main(void)
{
	int a[5] = { 23, -4, 21, 34, 32 };
	int max;

	max = getmax(a, sizeof(a)/sizeof(*a));
	printf("%d\n", max);

	max = getmax(a, 3);
	printf("%d\n", max);

	return 0;
}

/*Burada getmax int bir dizinin en büyük elemanına geri dönmektedir.*/
