#include <stdio.h>
#include <string.h>

char *mystrrchr(char *str, char ch)
{
	char *result = NULL;

	while (*str != '\0') {
		if (*str == ch)
			result = str;
		++str;
	}

	if (ch == '\0')
		return str;

	return result;
}

int main(void)
{
	char s[] = "izmir";
	char *str;

	str = mystrrchr(s, 'i');
	if (str == NULL)
		printf("karakter yok!..\n");
	else
		printf("Buldu:%s\n", str);

	return 0;
}
