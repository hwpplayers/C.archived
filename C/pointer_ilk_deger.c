#include <stdio.h>

int main(void)
{
	int a[3] = { 10, 20, 30 };
	int *pi = a;	// p'ye dizinin başlangıç adresi atanıyor
	int i;

	for (i = 0; i < 3; ++i)
		printf("%d ", pi[i]);
	printf("\n");

	return 0;
}
