#include <stdio.h>
#include <string.h>

int main(void)
{ 
	char s[100];
	unsigned n;

	printf("Bir yazi giriniz:");
	gets(s);

	n = strlen(s);
	printf("%u\n", n);

	return 0;
}
