#include <stdio.h>

int main()
{
	double d;
	
	d = 12345.6789;
	printf("%10.2f\n", d);	/*   12345.68 */
	printf("%4.2f\n", d);	/*12345.68 */

	d = 12.78;
	printf("%.0f\n", d);

	return 0;
}
