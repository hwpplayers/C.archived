#include <stdio.h>

int main(void)
{
	char s[100];
	int i;

	printf("Yazi giriniz:");
	gets(s);
	
	for (i = 0; s[i] != '\0'; ++i)
		;
	for (--i; i >= 0; --i)
		putchar(s[i]);
	putchar('\n');

	return 0;
}
