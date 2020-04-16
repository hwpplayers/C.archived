#include <stdio.h>

int main()
{
	long a;
	float b;

	a = 123456789;
	b = a;
	printf("%.0f\n", b);		/* 123456792 */
	
	return 0;
}
