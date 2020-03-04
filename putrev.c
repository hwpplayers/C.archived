#include <stdio.h>

void putsrev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (--i; i >= 0; --i)
		putchar(str[i]);
	putchar('\n');
}

int main(void)
{ 
	char s[] = "ankara";

	putsrev(s);
	
	return 0;
}
