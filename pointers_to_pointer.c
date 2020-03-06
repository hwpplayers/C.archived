#include <stdio.h>

int main(void)
{
	int a = 10;
	int *pi;
	int **ppi;

	pi = &a;
	ppi = &pi;

	printf("%d\n", **ppi);
	
	return 0;
}
