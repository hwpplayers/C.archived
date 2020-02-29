#include <stdio.h>

int main(void)
{
	char s[10];
	int i;

	s[0] = 'a';
	s[1] = 'l';
	s[2] = 'i';
	s[3] = '\0';

	for (i = 0; s[i] != '\0'; ++i)
		putchar(s[i]);
	putchar('\n');

	return 0;
}
