#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "izmir";
	char d[32] = "ankara";

	strncat(d, s, 100);
	puts(d);	/* ankaraizmir çıkar fakat dizi taşması olmaz */

	return 0;
}
