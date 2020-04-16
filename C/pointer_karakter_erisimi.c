#include <stdio.h>

int main(void)
{
	char s[] = "ankara";
	char *pc;

	pc = s;

	while (*pc != '\0') {
		putchar(*pc);
		++pc;
	}
	putchar('\n');

	return 0;
}
