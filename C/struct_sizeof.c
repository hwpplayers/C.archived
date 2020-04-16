#include <stdio.h>

struct SAMPLE {
	char a;
	int b;
	char c;
	int d;
};

int main(void)
{
	struct SAMPLE s;

	printf("%u\n", sizeof(s));		/* 16 */

	return 0;
}
