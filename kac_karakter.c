#include <stdio.h>

int main(void)
{
	char s[100];
	char ch;
	int i, count;

	printf("Yazi giriniz:");
	gets(s);
	printf("Bir karakter giriniz:");
	ch = getchar();

	for (count = 0, i = 0; s[i] != '\0'; ++i)
		if (s[i] == ch)
			++count;
	
	printf("%d\n", count);

	return 0;
}
