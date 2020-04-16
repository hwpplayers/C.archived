#include <stdio.h>

int *getmax_addr(int *pi, int size)
{
	int *pmax = &pi[0];
	int i;

	for (i = 1; i < size; ++i)
		if (pi[i] > *pmax)
			pmax = &pi[i];

	return pmax;
}

int main(void)
{ 
	int a[10] = { 34, 21, 87, 45, 32, 67, 93, 22, 9, 2 };
	int *pmax;

	pmax = getmax_addr(a, 10);
	printf("%d\n", *pmax);
	
	return 0;
}
