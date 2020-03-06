#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fs, *fd;
	int ch;
			
	if ((fs = fopen("sample.c", "r")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	if ((fd = fopen("xxx.c", "w")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fs)) != EOF)
		if (fputc(ch, fd) == EOF) {
			printf("cannot write file!..\n");
			exit(EXIT_FAILURE);
		}
	if (ferror(fs)) {
		printf("cannot read file!..\n");
		exit(EXIT_FAILURE);
	}

	printf("success...\n");
			
	fclose(fs);
	fclose(fd);
	
	return 0;
}
