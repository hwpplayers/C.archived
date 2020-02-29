#include <stdio.h>

int main()
{
	int i;
	
	i = -123;
	printf("%+d\n", i);		/* -123 */
	i = 123;
	printf("%+d\n", i);		/* +123 */

	return 0;
}
