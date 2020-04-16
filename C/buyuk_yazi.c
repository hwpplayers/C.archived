#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[100];
	int i;

	printf("Yazi giriniz:");
	gets(s);
	
	for (i = 0; s[i] != '\0'; ++i)
		s[i] = toupper(s[i]);
	puts(s);

	return 0;
}
