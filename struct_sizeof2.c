#include <stdio.h>

struct SAMPLE {
	char a;
	char b;
	int c;
	int d;
};

int main(void)
{
	struct SAMPLE s;

	printf("%u\n", sizeof(s));		/* 12 */

	return 0;
}
