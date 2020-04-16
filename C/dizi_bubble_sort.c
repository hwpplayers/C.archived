/*Örneğin bir diziyi kabarcık sıralaması (bubble sort) yöntemiyle sıraya dizen fonksiyon şöyle yazılabilir:*/

#include <stdio.h>

void bsort(int *pi, int size)
{
	int i, k;

	for (i = 0; i < size - 1; ++i)
		for (k = 0; k < size - 1 - i; ++k)
			if (pi[k] > pi[k + 1]) {
				int temp = pi[k];
				pi[k] = pi[k + 1];
				pi[k + 1] = temp;
			}
}

void disp_array(int *pi, int size)
{
	int i;

	for (i = 0; i < size; ++i)
		printf("%d ", pi[i]);
	printf("\n");
}

int main(void)
{
	int a[] = { 4, 8, 2, 21, 43, 10, -5, 87, 9, 68 };

	bsort(a, 10);
	disp_array(a, 10);

	return 0;
}
