#include <stdio.h>

int main(void)
{
	int a;
	int *pi;
	int **ppi;

	a = 10;
	pi = &a;
	ppi = &pi;

	**ppi = 20;
	printf("%d\n", a);

	return 0;
}
