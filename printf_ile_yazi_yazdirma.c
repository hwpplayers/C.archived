#include <stdio.h>

int main(void)
{
	char s[100];

	printf("Yazi giriniz:");
	gets(s);

	printf("Girilen yazi: %s\n", s);

	return 0;
}

/* 

Yani:

puts(s);

ile,

printf("%s\n", s);

eşdeğerdir. */
