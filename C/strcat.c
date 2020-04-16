#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[32] = "ankara";
	char d[32] = "izmir";

	strcat(d, s);
	printf("%s\n", d);

	return 0;
}
