#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int i, ch;

	if ((f = fopen(file_name, "r")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}


	while ((ch = fgetc(f)) != EOF)
		putchar(ch);

	if (ferror(f)) {
		printf("can not read file...!");
		exit(EXIT_FAILURE);
	}

	fclose(f);

	return 0;
}
