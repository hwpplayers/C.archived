#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[30] = "ankara";
	char d[30];

	strcpy(d, s);
	memcpy(d, s, strlen(s) + 1);

	return 0;
}
