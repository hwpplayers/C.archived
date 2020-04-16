#include <stdio.h>

int main()
{
	int a, b, c;

	a = 3;
	b = 2;
	c = ++a * b--; 
	printf("a = %d, b = %d, c = %d\n", a, b, c); /* a = 4, b = 1, c = 8 */

	return 0;
}
