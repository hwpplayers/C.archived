#include <stdio.h>
#include <string.h>

char *mystrcpy(char *dest, char *source)
{
	int i;

	for (i = 0; (dest[i] = source[i]) != '\0'; ++i)
		;

	return dest;
}

char *mystrcpy2(char *dest, char *source)
{
	char *temp = dest;

	while ((*dest = *source) != '\0') {
		++dest;
		++source;
	}

	return temp;
}

int main(void)
{
	char s[32] = "ankara";
	char d[32];

	mystrcpy(d, s);
	puts(d);

	mystrcpy2(d, s);
	puts(d);

	return 0;
}
