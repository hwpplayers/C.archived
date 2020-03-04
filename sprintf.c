#include <stdio.h>

int main(void)
{
	char s[100];
	int a = 10;
	double b = 12.345;

	sprintf(s, "a = %d, b = %f\n", a, b);
	puts(s);
	
	return 0;
}
