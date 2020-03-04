#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[32] = "ankara";
	char d[32];

	strcpy(d, s + 2);
	puts(d);			/* kara */

	return 0;
}
