#include <stdio.h>

int main(void)
{
	int a[3] = { 10, 20, 30 };
	int *pi;
	int i;

	pi = a;

	printf("%d\n", *pi);		/* 10 */
	++pi;
	printf("%d\n", *pi);		/* 20 */
	++pi;
	printf("%d\n", *pi);		/* 30 */

	return 0;
}
