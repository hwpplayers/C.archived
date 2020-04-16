#include <stdio.h>

int main()
{
	goto TEST;

	{
		int i = 10;
	TEST:
		printf("%d\n", i);
	}

	return 0;
}
