#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "ankara";
	char *str = "ankara";

	*strchr(s, 'k') = 'x';
	puts(s);
	
	*strchr(str, 'k') = 'x';		/* undefined behavior */
	puts(s);

	return 0;
}
