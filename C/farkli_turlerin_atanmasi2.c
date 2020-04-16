#include <stdio.h>

int main()
{
	long a = 7654321;		/* 0x74CBB1 */
	short b;		

	b = a;
	printf("%d\n", b);		/* 0xCBB1 = -13391 */
	
	return 0;
}
