#include <stdio.h>
#include <string.h>

int main(void)
{
	char *names[] = { "ali", "veli", "selami", "siracettin", "ayse", "fatma", NULL };
	char str[100];
	int i;

	str[0] = '\0';

	for (i = 0; names[i] != NULL; ++i) {
		if (i != 0)
			strcat(str, ", ");
		strcat(str, names[i]);
	}
	puts(str);

	return 0;
}
