#include <stdio.h>

int main(void)
{
	char s[100];
	int a = 10, b = 20;

	sprintf(s, "a = %d, b = %d", a, b);
	puts(s);
	
	return 0;
}
