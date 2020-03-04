#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "izmir";
	char d[32] = "ankara";

	strncat(d, s, 3);
	puts(d);	/* ankaraizm */

	return 0;
}
