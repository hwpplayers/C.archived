#include <stdio.h>

int main(void)
{
	int a[3] = { 10, 20, 30 };
	int *pi;

	pi = a;
	*pi = 100;

	printf("%d\n", a[0]);
	
	return 0;
}
