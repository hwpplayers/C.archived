#include <stdio.h>

char *getstr(void)
{
	char s[] = "ankara";

	return s;
}

int main(void)
{
	char *str;

	str = getstr();		/* dikkat! gösterici hatası */
	printf("%s\n", str);

	return 0;
}
