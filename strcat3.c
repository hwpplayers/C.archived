#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1000];
	char k[32];

	s[0] = '\0';
	for (;;) {
		printf("Isim giriniz:");
		gets(k);
		if (*k == '\0')
			break;
		strcat(s, k);
	}
	puts(s);

	return 0;
}
