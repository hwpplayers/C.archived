#include <stdio.h>

int main(void)
{
	int n;

	n = sizeof 1.2 + 5;

	printf("%d\n", n);		/* 13 */

	n = sizeof (1.2 + 5);	/* 8 */
	
	return 0;
}
