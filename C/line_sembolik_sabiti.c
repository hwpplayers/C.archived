#include <stdio.h>
#include <stdlib.h>

int foo(void)
{
	return 0;
}

int main(void)
{
	if (!foo()) {
		fprintf(stderr, "Error in file: %s\n in line %d\n", __FILE__, __LINE__);
		exit(EXIT_FAILURE);
	}

	return 0;
}
