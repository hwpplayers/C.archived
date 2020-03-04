#include <stdio.h>
#include <string.h>

int mystrcmp(char *s1, char *s2)
{
	while (*s1 == *s2) {
		if (*s1 == '\0')
			break;
		++s1;
		++s2;
	}

	return *s1 - *s2;
}

int main(void)
{
	char s[64];
	char passwd[] = "maviay";

	printf("Enter password:");
	gets(s);

	if (!mystrcmp(s, passwd))
		printf("Ok\n");
	else
		printf("Invalid password\n");

	return 0;
}
