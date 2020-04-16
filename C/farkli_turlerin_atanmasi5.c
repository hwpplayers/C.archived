#include <stdio.h>

int main()
{
	double a;
	int b;

	a = 3.99;
	b = a;
	printf("%d\n", b);		/* 3 */
	
	a = -3.99;
	b = a;
	printf("%d\n", b);		/* -3 */

	return 0;
}
