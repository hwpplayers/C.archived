#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *f;
	int ch;

	if (argc == 1) {
		printf("usage: <mytype> <path>\n");
		exit(EXIT_FAILURE);
	}

	if (argc > 2) {
		fprintf(stderr, "too many arguments!..\n");
		exit(EXIT_FAILURE);
	}

	if ((f = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "cannot open file: %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(f)) != EOF)
		putchar(ch);

	if (ferror(f)) {
		fprintf(stderr, "IO error!\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
