#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[200];

	memset(s, 'a', 199);
	s[199] = '\0';
	printf("%s\n", s);

	return 0;
}
