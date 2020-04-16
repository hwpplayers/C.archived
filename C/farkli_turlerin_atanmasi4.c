#include <stdio.h>

int main()
{
	signed char a = -1;
	unsigned int b;

	b = a;
	printf("%u\n", b);	/* 4294967295 */
	
	return 0;
}
