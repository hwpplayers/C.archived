#include <stdio.h>

void myputs(char *str)
{
	while (*str != '\0') {
		putchar(*str);
		++str;
	}
	putchar('\n');
}

int main(void)
{ 
	char s[] = "ankara";

	myputs(s);
	puts(s);

	myputs(s + 2);
	puts(s + 2);
	
	return 0;
}
