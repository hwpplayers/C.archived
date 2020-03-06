#include <stdio.h>

int main(void)
{
	int a = -2, b;

	b = a >> 2;
	printf("%d\n", b);		/* -1 */

	return 0;
}
