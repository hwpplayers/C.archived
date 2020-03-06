#include <stdio.h>

#define Name(x) CSD##x

int main(void)
{
	int Name(x), Name(y);

	CSDx = 10;
	CSDy = 20;

	printf("%d, %d\n", CSDx, CSDy);

	return 0;
}
