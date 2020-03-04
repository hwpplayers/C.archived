#include <stdio.h>

int main(void)
{
	char s[] = "ankara";
	char *pc;
	int i;

	pc = s;

	for (i = 0; pc[i] != '\0'; ++i)
		putchar(pc[i]);
	putchar('\n');

	return 0;
}
