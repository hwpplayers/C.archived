#include <stdio.h>

int main(void)
{
	int a[4][3];
	int *pi;

	pi = a[2];		/* geçerli */
	pi[0] = 10;		/* a[2][0] = 10 */
	pi[1] = 20;		/* a[2][1] = 20 */
	pi[2] = 30;		/* a[2][1] = 30 */

	printf("%d, %d, %d\n", a[2][0], a[2][1], a[2][2]);

	return 0;
}
