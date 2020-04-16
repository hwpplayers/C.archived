#include <stdio.h>

int main(void)
{
	char s[100];
	double d = 12.345;

	sprintf(s, "%f", d);
	puts(s);
	
	return 0;
}
