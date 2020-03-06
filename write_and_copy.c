#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE		512

int main(void)
{
	FILE *fs, *fd;
	char buf[BUF_SIZE];
	size_t n;

	if ((fs = fopen("sample.c", "rb")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	if ((fd = fopen("xxx.c", "wb")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	while ((n = fread(buf, 1, BUF_SIZE, fs)) > 0) 
		if (fwrite(buf, 1, n, fd) != n) {
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
