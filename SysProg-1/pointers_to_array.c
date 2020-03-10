#include <stdio.h>

int main(void)
{
	int a[3] = { 1, 2, 3 };
	int(*pai)[3];
		
	pai = &a;	

	printf("%d\n", **pai);			/* 1 */
	printf("%d\n", (*pai)[1]);		/* 2*/
	printf("%d\n", (*pai)[2]);		/* 3 */

	return 0;
}
