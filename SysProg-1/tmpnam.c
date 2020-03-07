#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINE_LEN		4096

int issharp(const char *str)
{
	while (isspace(*str))
		++str;

	return *str == '#';
}

int main(int argc, char *argv[])
{
	FILE *f, *ftemp;
	char *ftempnam;
	char buf[LINE_LEN];

	if (argc != 2) {
		fprintf(stderr, "wrong number of arguments!..\n");
		exit(EXIT_FAILURE);
	}

	if ((f = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	if ((ftempnam = tmpnam(NULL)) == NULL) {
		fprintf(stderr, "cannot get temporary file name!..\n");
		exit(EXIT_FAILURE);
	}

	if ((ftemp = fopen(ftempnam, "w")) == NULL) {
		fprintf(stderr, "cannot create temporary file!..\n");;
		exit(EXIT_FAILURE);
	}

	while ((fgets(buf, LINE_LEN, f)) != NULL) {
		if (!issharp(buf) && fputs(buf, ftemp) == EOF) {
			fprintf(stderr, "cannot write file!..\n");
			exit(EXIT_FAILURE);
		}
	}

	fclose(f);
	fclose(ftemp);

	if (remove(argv[1]) == -1) {
		fprintf(stderr, "cannot deleta file!..\n");;
		exit(EXIT_FAILURE);
	}

	if (rename(ftempnam, argv[1]) == -1) {
		fprintf(stderr, "cannot rename file!..\n");;
		exit(EXIT_FAILURE);
	}

	return 0;
}
