#include <stdio.h>

#define TEST

int main(void)
{
#ifdef TEST
	printf("TEST define edilmis!\n");
#else
	printf("TEST define edilmemis!\n");
#endif

	return 0;
}
