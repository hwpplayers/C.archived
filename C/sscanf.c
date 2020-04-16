#include <stdio.h>

int main(void)
{
	char s[100] = "    123 456   ";
	int a, b;

	sscanf(s, "%d%d", &a, &b);

	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}
