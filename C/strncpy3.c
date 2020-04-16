#include <stdio.h>
#include <string.h>

char *mystrncpy(char *dest, char *source, unsigned n)
{
	char *temp = dest;

	while (n-- > 0) {
		*dest = *source;
		if (*source != '\0')
			++source;
		++dest;
	}

	return temp;
}

int main(void)
{
	char s[] = "izmir";
	char d[32] = "ankara";

	mystrncpy(d, s, 30);
	puts(d);		/* izmir çıkacak fakat 24 tane null karakter d'ye eklenecek */

	return 0;
}
