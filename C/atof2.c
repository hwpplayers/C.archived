#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double total = 0;
	int i;

	for (i = 1; i < argc; ++i)
		total += atof(argv[i]);

	printf("%f\n", total);

	return 0;
}
