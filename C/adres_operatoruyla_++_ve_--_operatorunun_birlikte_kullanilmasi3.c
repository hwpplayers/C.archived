#include <stdio.h>

char *mystrcpy(char *dest, char *source)
{
	char *temp = dest;

	while ((*dest++ = *source++) != '\0')
		;

	return temp;
}

int main(void)
{
	char s[] = "ankara";
	char d[32];

	mystrcpy(d, s);

	puts(d);		/* ankara */

	return 0;
}
