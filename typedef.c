#include <stdio.h>

typedef int I;
typedef char *STR;

int main(void)
{
	I a;
	STR s = "Ankara";

	a = 10;
	printf("%d\n", a);
	printf("%s\n", s);

	return 0;
}
