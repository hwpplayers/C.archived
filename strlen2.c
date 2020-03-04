#include <stdio.h>
#include <string.h>

unsigned mystrlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	return i;
}

unsigned mystrlen2(char *str)
{
	int count = 0;

	while (*str != '\0') {
		++count;
		++str;
	}

	return count;
}

int main(void)
{
	char s[100];
	unsigned n;

	printf("Bir yazi giriniz:");
	gets(s);

	n = mystrlen(s);
	printf("%u\n", n);

	n = mystrlen2(s);
	printf("%u\n", n);

	return 0;
}
