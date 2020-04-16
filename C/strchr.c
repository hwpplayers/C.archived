#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "ankara";
	char *str;

	str = strchr(s, 'k');
	if (str == NULL)
		printf("karakter yok!..\n");
	else
		printf("Buldu:%s\n", str);

	return 0;
}
