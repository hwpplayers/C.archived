#include <stdio.h>

int main(void)
{
	unsigned char a = 0x7F;
	
	a &= 0xDF;

	printf("%02X\n", a);		/* 0x5F */

	return 0;
}
