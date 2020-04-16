#include <stdio.h>

int main(void)
{
	char s[10] = { 'a', 'l', 'i', '\0' };
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		putchar(s[i]);
	putchar('\n');

	return 0;
}
