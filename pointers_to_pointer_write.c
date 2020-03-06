#include <stdio.h>
#include <stdlib.h>

void mallocstr(char **ptr, size_t size)
{
	*ptr = (char *)malloc(size);

	if (*ptr == NULL) {
		fprintf(stderr, "cannot allocate memory!..\n");
		exit(EXIT_FAILURE);
	}
}

int main(void)
{
	char *str;

	mallocstr(&str, 32);
	gets(str);
	puts(str);

	return 0;
}
