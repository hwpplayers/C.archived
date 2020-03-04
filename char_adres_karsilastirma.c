#include <stdio.h>

void putsrev(char *s)
{
	char *end = s;
	while (*end != '\0')
		++end;

	--end;
	while (end >= s) {
		putchar(*end);
		--end;
	}
	putchar('\n');
}

int main(void)
{
	char *s = "ankara";

	putsrev(s);

	return 0;
}
