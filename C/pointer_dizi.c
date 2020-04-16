#include <stdio.h>

int main(void)
{
	int a[3] = { 10, 20, 30 };
	int i;

	*a = 100;
	for (i = 0; i < 3; ++i)
		printf("%d\n", a[i]);
	
	return 0;
}
