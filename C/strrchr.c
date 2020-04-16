#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "izmir";
	char *str;

	str = strrchr(s, 'i');
	if (str == NULL)
		printf("karakter yok!..\n");
	else
		printf("Buldu:%s\n", str);

	return 0;
}
