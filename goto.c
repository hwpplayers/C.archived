#include <stdio.h>

int main()
{
	int i = 0;
REPEAT:
	printf("%d\n", i);
	++i;
	if (i < 10)
		goto REPEAT;

	return 0;
}
