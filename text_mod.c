#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	int i;

	if ((f = fopen("test.txt", "w")) == NULL) {
		printf("can not open file");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 5; ++i)
		fputc('\n', f);

	fclose(f);

	return 0;
}
