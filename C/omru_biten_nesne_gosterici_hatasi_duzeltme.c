#include <stdio.h>

void getname(char *s)
{
	printf("Adi Soyadi:");
	gets(s);
}

int main(void)
{
	char s[128];

	getname(s);
	printf("%s\n", s);

	return 0;
}
