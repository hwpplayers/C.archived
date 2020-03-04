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

void disp_array(int *pi, int size)
{
	int i;

	for (i = 0; i < size; ++i)
		printf("%d ", pi[i])
		;
	printf("\n");
}

int main(void)
{ 
	int a[10] = { 34, 21, 87, 45, 32, 67, 93, 22, 9, 2 };
	int *pmax;

	disp_array(a, 10);
	*getmax_addr(a, 10) = 1000;
	disp_array(a, 10);
	
	return 0;
}
