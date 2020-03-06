#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int i;

	if ((f = fopen(file_name, "w")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 10; ++i)
		fprintf(f, "sayı=%d\n", i + 1);

	fclose(f);

	return 0;
}
