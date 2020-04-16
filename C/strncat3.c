#include <stdio.h>
#include <string.h>

char mystrncat(char *dest, char *source, unsigned n)
{
	char *temp = dest;

	while (*dest != '\0')
		++dest;

	while ((*dest = *source) != '\0' && n > 0) {
		++dest;
		++source;
		--n;
	}

	/* if (n == 0) */
		*dest = '\0';

	return temp;
}

int main(void)
{
	char s[] = "izmir";
	char d[32] = "ankara";

	mystrncat(d, s, 50);
	puts(d);	/* ankaraizmir çıkar fakat dizi taşması olmaz */

	return 0;
}
