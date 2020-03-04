#include <stdio.h>

int main(void)
{
	char ch;
	char *pc;

	pc = &ch;
	*pc = 'x';
	putchar(ch);
	
	return 0;
}
