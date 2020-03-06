#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[] = "123.45";
	double d;

	d = atof(s);
	printf("%f\n", d);

	return 0;
}
