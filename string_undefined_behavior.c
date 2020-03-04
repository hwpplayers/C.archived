#include <stdio.h>

int main(void)
{
	char *str = "ankara";
	char s[] = "ankara";

	*str = 'x';		/* undefined behavior */
	*s = 'x';		/* normal */
	
	return 0;
}
