#include <stdio.h>

int main(void)
{
	char s[100];
	int i;

	printf("Yazi giriniz:");
	gets(s);
	
	for (i = 0; s[i] != '\0'; ++i)
		;
	printf("%d\n", i);

	return 0;
}
