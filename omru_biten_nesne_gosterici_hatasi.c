#include <stdio.h>

char *getname(void)
{
	char name[128];

	printf("Adi Soyadi:");
	gets(name);

	return name;
}

int main(void)
{
	char *s;

	s = getname();
	printf("%s\n", s);

	return 0;
}
