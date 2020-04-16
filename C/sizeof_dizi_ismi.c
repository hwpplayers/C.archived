#include <stdio.h>

int main(void)
{
	int a[4] = { 1, 2 };
	char s[] = "ali";

	printf("%u\n", sizeof a);		/* 16 */
	printf("%u\n", sizeof s);		/* 4 */
	
	return 0;
}
