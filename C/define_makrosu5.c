#include <stdio.h>
#include <stdlib.h>

#define check(a)	if ((a) == 0) {					\
						fprintf(stderr, "Error\n");	\
						exit(EXIT_FAILURE);			\
					}

int main(void)
{
	int a = 0;

	check(a);

	return 0;
}
