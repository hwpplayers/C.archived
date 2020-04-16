#include <stdio.h>

int main(void)
{
	unsigned char a = 0x5F;
	unsigned char b = 0xC4;
	unsigned c;

	c = a & b;
	printf("%02X\n", c);		/* 0x44 */

	c = a | b;
	printf("%02X\n", c);		/* 0xDF */

	return 0;
}
