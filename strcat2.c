#include <stdio.h>
#include <string.h>

char *mystrcat(char *dest, char *source)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	for (k = 0; (dest[k + i] = source[k]) != '\0'; ++k)
		;

	return dest;
}

char *mystrcat2(char *dest, char *source)
{
	char *temp = dest;

	while (*dest != '\0')
		++dest;
	while ((*dest = *source) != '\0') {
		++dest;
		++source;
	}

	return temp;
}

int main(void)
{
	char s[32] = "ankara";
	char d[32] = "izmir";

	mystrcat(d, s);
	printf("%s\n", d);

	mystrcat2(d, s);
	printf("%s\n", d);		/* izmirankaraankara*/
	return 0;
}
