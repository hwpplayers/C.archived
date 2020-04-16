#include <stdio.h>

typedef int ARY[3];

int main(void)
{
	ARY a = { 1, 2, 3 };
	int i;

	for (i = 0; i < 3; ++i)
		printf("%d\n", a[i]);

	return 0;
}
