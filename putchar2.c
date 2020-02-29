#include <stdio.h>

int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
		putchar(ch);
	putchar('\n');

	return 0;
}
