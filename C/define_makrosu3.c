#include <stdio.h>

#define max(a, b)	((a) > (b) ? (a) : (b))

int main(void)
{
	int a = 3, b = 4, c;

	c = max(a, b);		/* c = ((a) > (b) ? (a) : (b)) */
	printf("%d\n", c);

	return 0;
}
