#include <stdio.h>
#include <ctype.h>

int myatoi(const char *str)
{
	int val = 0;
	int sign = 1;

	while (isspace(*str))
		++str;

	if (*str == '-') {
		sign = -1;
		++str;
	}

	while (isdigit(*str)) {
		val = val * 10 + *str - '0';
		++str;
	}

	return val * sign;
}

int main(void)
{
	char s[] = " -1205";
	int i;

	i = myatoi(s);
	printf("%d\n", i);		/* 12 */

	return 0;
}
