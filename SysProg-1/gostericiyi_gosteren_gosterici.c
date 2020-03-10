#include <stdio.h>
#include <stdlib.h>

void allocstr(char **str, size_t n)
{
	if ((*str = (char *)malloc(n)) == NULL) {
		fprintf(stderr, "fatal error: Not enough memory!..\n");
		exit(EXIT_FAILURE);
	}
}

int main(void)
{
	char *name;

	allocstr(&name, 32);
	gets(name);
	puts(name);

	return 0;
}
