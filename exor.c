#include <stdio.h>

int main(void)
{
	unsigned char a = 0x9A;
	unsigned char b = 0x7C;
	unsigned char c;

	c = a ^ b;

	printf("%02X\n", c);		/* 0xE6 */

	return 0;
}
