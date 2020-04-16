#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "izmir";
	char d[32] = "ankara";

	strncpy(d, s, 3);
	puts(d);		/* izmara */

	return 0;
}
