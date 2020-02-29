#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i <= 100; ++i)
		printf("%-10d%d\n", i, i *i);

	return 0;
}
