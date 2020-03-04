#include <stdio.h>

int main(void)
{
	int x = 10, y = 20, z = 30;
	int *a[3];
	int i;

	a[0] = &x;
	a[1] = &y;
	a[2] = &z;

	for (i = 0; i < 3; ++i)
		printf("%d\n", *a[i]);

	return 0;
}
