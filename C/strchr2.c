#include <stdio.h>

char *mystrchr(char *str, char ch)
{
	while (*str != '\0') {
		if (*str == ch)
			break;
		++str;
	}

	if (*str == '\0' && ch != '\0')
		return NULL;

	return str;
}

int main(void)
{
	char s[] = "ankara";
	char *str;

	str = mystrchr(s, 'k');
	if (str == NULL)
		printf("karakter yok!..\n");
	else
		printf("Buldu:%s\n", str);

	return 0;
}
