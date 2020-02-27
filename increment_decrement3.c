#include <stdio.h>

int main()
{
	int a, b;

	a = 3;
	b = ++a; 
	printf("a = %d, b = %d\n", a, b);	/* a = 4, b = 4 */

	a = 3;
	b = a++;
	printf("a = %d, b = %d\n", a, b);	/* a = 4, b = 3 */
	
	return 0;
}
